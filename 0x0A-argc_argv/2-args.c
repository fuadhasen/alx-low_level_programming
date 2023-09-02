#include <stdio.h>

/**
 * main - Entry point
 * @ac: number of arg
 * @av: the argument
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}

