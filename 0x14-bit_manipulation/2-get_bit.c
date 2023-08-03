#include "main.h"

/**
 * get_bit - get the index of the bit
 * @n: the number
 * @index: the position
 *
 * Return: the value of the indexed bit,if not -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int size = sizeof(unsigned long int) * 8;

	if (index < 0 && index >= size)
		return (-1);

	return ((n >> index) & 1);
}
