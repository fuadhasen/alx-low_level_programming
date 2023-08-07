#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the file
 * @filename: the file name
 * @letters: number of letter
 *
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *databuffer;

	if (file_name == NULL)
		return (0);

	databuffer = malloc(sizeof(char) * letters);
	if (databuffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, databuffer, letters);
	bytes_written = write(STDOUT_FILENO, databuffer, bytes_read);

	if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		free(databuffer);
		return (0);
	}

	free(databuffer);
	close(file_descriptor);

	return (bytes_written);
}


