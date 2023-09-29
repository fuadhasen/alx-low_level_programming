#include "main.h"

/**
 * set_bit - set bitt
 * @n: decimal
 * @index: idx
 *
 * Return: 1, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		unsigned long int m = 1UL << index;

		*n |= m;
		return (1);
	}
	return (-1);
}
