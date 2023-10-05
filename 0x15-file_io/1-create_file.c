#include "main.h"

/**
 * create_file - creat
 * @filename: path
 * @text_content: txt
 *
 * Return: 1 -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t fileperm = S_IRUSR | S_IWUSR;

	if (access(filename, F_OK) == -1)
	{
		fd = open(filename, fileperm);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			ssize_t byte = write(fd, text_content, strlen(text_content));

			if (byte == -1)
				return (-1);
		}
		close(fd);
	}
	else
	{
		fd = open(filename, O_WRONLY |  O_TRUNC, fileperm);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
		{
			ssize_t byte = write(fd, text_content, strlen(text_content));

			if (byte == -1)
				return (-1);
		}
	}
	close(fd);
	return (1);
}
