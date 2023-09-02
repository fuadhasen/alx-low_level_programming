#include <stdio.h>

/**
 * main - Entry point
 * @ac: number of argument
 * @av: argumnet
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s ", av[i]);
	}
	printf("\n");
	return (0);
}
