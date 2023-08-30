#include "main.h"

/**
 * check - the num
 * @a: number
 * @b: p
 *
 * Return: prime
 */

int check(int a, int b)
{
	if (b < 2 || b % 2 == 0)
		return (0);
	if (a > (b / 2))
		return (1);
	return (check(a + 1, b));
}

/**
 * is_prime_number - chekc prime
 * @n: the number
 *
 * Return: the num
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (2);
	return (check(2, n));
}
