#include "main.h"

/**
 * print_binary - print binary representation
 * @n: the number
 *
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int);
	int shift = size - 1, i;

	for (i = 0; i < size; i++)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');

		shift--;
	}
}

