#include "main.h"

/**
 * _print_rev_recursion - print revers string
 * @s: the string
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
