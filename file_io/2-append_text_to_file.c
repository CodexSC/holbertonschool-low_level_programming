#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: content to append (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	size_t content_len;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	content_len = strlen(text_content);
	bytes_written = write(file_descriptor, text_content, content_len);

	if (bytes_written < 0)
	{
		close(file_descriptor);
		return (-1);
	}

	if ((size_t)bytes_written != content_len)
	{
		close(file_descriptor);
		return (-1);
	}

	if (close(file_descriptor) == -1)
		return (-1);

	return (1);
}
