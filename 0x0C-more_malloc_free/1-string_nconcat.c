#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatnate n
 * @s1: first string
 * @s2: second string
 * @n: num
 *
 * Return: new
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	size_t len1, len2;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	new = malloc(len1 + n + 1);
	if (new == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(new, s1);
	else
		new[0] = '\0';

	strncat(new, s2, n);
	new[len1 + n] = '\0';

	return (new);
}

