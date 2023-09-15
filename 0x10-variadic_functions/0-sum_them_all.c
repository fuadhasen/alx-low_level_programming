#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: contst n
 *
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0, value;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(arg, int);
		sum += value;
	}
	va_end(arg);
	return (sum);
}

