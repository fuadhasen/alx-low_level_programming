#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int i = 0;

	while (numbers[i] != '\0')
	{
		_putchar(numbers[i]);
		i++;
	}
}
