#include "main.h"

/**
 * _strlen_recursion - lengthvof string
 * @s: the string
 *
 * Return: 0 if end, or length
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
