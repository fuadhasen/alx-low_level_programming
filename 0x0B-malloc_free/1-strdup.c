#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy the string
 * @str: the string
 *
 * Return: pointer to newstr
 */

char *_strdup(char *str)
{
	char *newstr;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	newstr = malloc(len + 1);
	if (newstr == NULL)
		return (NULL);
	strcpy(newstr, str);
	return (newstr);
}
