#include "main.h"

/**
 * main - Entry point
 * print_alphabet - print the lower case alphabet follow by new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

