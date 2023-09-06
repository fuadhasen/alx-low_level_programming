#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenat
 * @s1: first string
 * @s2: second string
 *
 * Return: pointerto newstr
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	size_t len1, len2;

	if (s1 == NULL)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);

	newstr = malloc(len1 + len2 + 1);
	if (newstr == NULL)
		return (NULL);
	strcat(s1, s2);
	strcpy(newstr, s1);
	return (newstr);
}
