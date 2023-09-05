#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *create_array - function that creat array
 * @size: size of byte
 * @c: the charachter
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	str[size] = '\0';
	return (str);
}
