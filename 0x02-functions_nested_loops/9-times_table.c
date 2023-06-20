#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			if (product > 9)
			{
				putchar(' ');
				putchar(product / 10 + '0');
				putchar(product % 10 + '0');
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar(product + '0');
			}
			if (col < 9)
			{
				putchar(',');
			}
		}
		putchar('\n');
	}
}
