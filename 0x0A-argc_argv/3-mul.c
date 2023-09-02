#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @ac: number of arg
 * @av: argument
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i, mult = 1;

	if (ac < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < ac; i++)
	{
		mult *= atoi(av[i]);
	}
	printf("%d\n", mult);
	return (0);
}


