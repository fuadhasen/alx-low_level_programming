#include "main.h"

/**
 * flip_bits - flip
 * @n: dec
 * @m: flip
 *
 * Return: i;
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	int i = 0;

	while (res > 0)
	{
		if (res & 1)
			i++;
		res >>= 1;
	}
	return (i);
}
