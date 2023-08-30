#include "main.h"

/**
 * _puts_recursion - print string recursivly
 * @s: the string
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
