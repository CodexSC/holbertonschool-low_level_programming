#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**

* print_error_and_exit - Prints an error message and exits
* @message: Error message
* @file: File associated with the error
* @code: Exit code
  */
  void print_error_and_exit(const char *message, const char *file, int code)
  {
  dprintf(STDERR_FILENO, "%s %s\n", message, file);
  exit(code);
  }

/**

* close_fd_or_exit - Closes a file descriptor or exits with code 100
* @fd: File descriptor to close
  */
  void close_fd_or_exit(int fd)
  {
  if (close(fd) == -1)
  {
  dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
  exit(100);
  }
  }

/**

* open_source_file - Opens source file or exits with code 98
* @filename: Source filename
* Return: File descriptor of source file
  */
  int open_source_file(const char *filename)
  {
  int fd = open(filename, O_RDONLY);
  if (fd == -1)
  print_error_and_exit("Error: Can't read from file", filename, 98);
  return (fd);
  }

/**

* open_dest_file - Opens/creates destination file or exits with code 99
* @filename: Destination filename
* Return: File descriptor of destination file
  */
  int open_dest_file(const char *filename)
  {
  int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
  S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
  if (fd == -1)
  print_error_and_exit("Error: Can't write to", filename, 99);
  return (fd);
  }

/**

* copy_file_content - Copies content from one file descriptor to another
* @fd_from: Source file descriptor
* @fd_to: Destination file descriptor
* @file_from: Source filename
* @file_to: Destination filename
  */
  void copy_file_content(int fd_from, int fd_to, const char *file_from, const char *file_to)
  {
  char buffer[BUFFER_SIZE];
  ssize_t bytes_read, bytes_written;

  while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
  {
  bytes_written = write(fd_to, buffer, bytes_read);
  if (bytes_written != bytes_read)
  {
  close_fd_or_exit(fd_from);
  close_fd_or_exit(fd_to);
  print_error_and_exit("Error: Can't write to", file_to, 99);
  }
  }

  if (bytes_read == -1)
  {
  close_fd_or_exit(fd_from);
  close_fd_or_exit(fd_to);
  print_error_and_exit("Error: Can't read from file", file_from, 98);
  }
  }

/**

* validate_args - Validates the number of command-line arguments
* @argc: Argument count
  */
  void validate_args(int argc)
  {
  if (argc != 3)
  {
  dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
  exit(97);
  }
  }

/**

* main - Entry point for the cp program
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success
  */
  int main(int argc, char *argv[])
  {
  int fd_from, fd_to;

  validate_args(argc);
  fd_from = open_source_file(argv[1]);
  fd_to = open_dest_file(argv[2]);
  copy_file_content(fd_from, fd_to, argv[1], argv[2]);
  close_fd_or_exit(fd_from);
  close_fd_or_exit(fd_to);

  return (0);
  }
