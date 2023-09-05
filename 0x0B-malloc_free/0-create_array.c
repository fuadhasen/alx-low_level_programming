#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - function that creat array
 * @size: size of byte
 * @c: the charachter
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * 98);
	if (str == NULL)
		return (NULL);

	str[0] = c;
	return (str);
}
