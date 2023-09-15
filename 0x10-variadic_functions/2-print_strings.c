#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print str
 * @separator: sep
 * @n: size
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("(nil)");
			if (separator != NULL && i < n - 1)

				printf("%s", separator);
		}

	}
	va_end(arg);
	printf("\n");
}
