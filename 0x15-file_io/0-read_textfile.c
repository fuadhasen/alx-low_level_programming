#include "main.h"

/**
 * read_textfile -read
 * @filename: path
 * @letters: count
 *
 * Return: byte read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	int fd;
	ssize_t byte;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	s = malloc(letters);
	if (s == NULL)
		return (0);
	byte = read(fd, s, letters);
	if (byte == -1)
		return (0);
	printf("%s", s);
	close(fd);
	return (byte);
}
