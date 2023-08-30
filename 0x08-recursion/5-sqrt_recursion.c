#include "main.h"

/**
 * check - check
 * @a: guess num
 * @b: the number
 *
 * Return: sqrt
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - root
 * @n: number
 *
 * Return: the sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
