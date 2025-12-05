#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file with text content
 * @filename: name of the file to create
 * @text_content: content to write to the file (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	size_t content_len;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
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
	}

	if (close(file_descriptor) == -1)
		return (-1);

	return (1);
}
