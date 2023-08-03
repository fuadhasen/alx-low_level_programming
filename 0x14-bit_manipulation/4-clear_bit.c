#include "main.h"

/**
 * clear_bit -clear the value of bit
 * @n: the number
 * @index: the index
 *
 * Return: 1 or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	temp = ~(1 << index);
	*n = *n & temp;

	return (1);
}
