#include "main.h"

/**
 * print_binary - print binary representation
 * @n: the number
 *
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int shift = size - 1, i;
	int flag = 0;

	for (i = 0; i < size; i++)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag)
				_putchar('0');
		}

		shift--;
	}
	if (!flag)
		_putchar('0');
}

