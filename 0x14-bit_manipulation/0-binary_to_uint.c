#include "main.h"

/**
 * binary_to_uint - convert binay string to unsigned int
 * @b: pointer to first elemnt in the string
 *
 * Return: res, if not return 0
 */

unsigned int binary_to_uint(const char *b)
{
	int bit, i;
	size_t n = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (b[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			bit = b[i] - '0';
			res = (res << 1) | bit;
		}
		else
			return (0);
	}
	return (res);
}
