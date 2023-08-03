#include "main.h"

/**
 * binary_to_uint - convert binay string to unsigned int
 * @b: pointer to first elemnt in the string
 *
 * Return: res, if not return 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res;

	res = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == '1')
			res += 1;
	}
	return (res);
}
