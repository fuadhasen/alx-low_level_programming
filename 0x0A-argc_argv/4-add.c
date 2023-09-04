#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @ac: number of argument
 * @av: the argument
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i, j, sum = 0, num;

	if (ac < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < ac; i++)
	{
		char *args = av[i];
		int isDigit = 1;

		for (j = 0; args[j] != '\0'; j++)
		{
			if (!(isdigit(args[j])))
			{
				isDigit = 0;
				break;
			}
		}

		if (isDigit)
		{
			num = atoi(args);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
