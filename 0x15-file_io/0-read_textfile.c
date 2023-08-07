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
	ssize_t a, b, c;
	char *databuffer;

	if (filename == NULL)
		return (0);

	databuffer = malloc(sizeof(char) * letters);
	if (databuffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buffer, letters);
	c = write(STDOUT_FILENO, buffer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(databuffer);
		return (0);
	}

	free(databuffer);
	close(a);

	return (c);
}
