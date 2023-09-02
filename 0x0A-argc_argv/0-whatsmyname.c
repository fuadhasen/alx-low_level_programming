#include <stdio.h>

/**
 * main - Entry point
 * @ac: number of argument
 * @av: argumnet
 *
 * Return: 0 on succesis
 */

int main(int ac, char *av[])
{
	if (ac > 0)
	{
		printf("%s\n", av[0]);
	}
	return (0);
}
