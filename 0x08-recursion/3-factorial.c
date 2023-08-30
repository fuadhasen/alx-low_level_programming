#include "main.h"

/**
 * factorial - factbof num
 * @n: the number
 *
 * Return: -1 eror, 1 for 0 and 1, fact for success
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
