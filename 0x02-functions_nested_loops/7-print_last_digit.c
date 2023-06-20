#include "main.h"

/**
 * main - Prints the last digit of a number
 * @n: The number to get the last digit of
 * Return: 0
 */

main(void)
{
	int r; 

	r = print_last_digit(INT_MIN);


	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
