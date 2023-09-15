#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format string containing type specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s(nil)", sep);
			printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

