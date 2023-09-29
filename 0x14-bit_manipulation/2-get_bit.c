#include "main.h"

/**
 * get_bit - get by index
 * @n: decimal
 * @index: idx
 *
 * Return: -1 or idxed bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		unsigned int m = 1UL << index;

		return ((n & m) ? 1 : 0);
	}
	return (-1);
}
