#include <stdio.h>
#include <string.h>

/**
 * _strdup - copy the string
 * @str: the string
 *
 * Return: pointer to newstr
 */

char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
		return (NULL);

	unsigned int len = strlen(str);

	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	strcpy(newstr, str);
	return (newstr);
}
