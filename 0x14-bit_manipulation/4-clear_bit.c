#include "main.h"

/**
 *  clear_bit - clear set 0
 * @n: decimal
 * @index: idx
 *
 * Return: 1, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		unsigned int m = 1UL << index;

		*n &= ~m;
		return (1);
	}
	return (-1);
}
