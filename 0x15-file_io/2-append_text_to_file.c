#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append
 * @filename: file name
 * @text_content: the content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedsc;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);
	if (filedesc == -1)
		return (-1);
	if (text_content != NULL)
		length = write(filedesc, text_content, strlen(text_content));
	close(filedesc);
	if (length == -1)
		return (-1);
	return (1);
}
