#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - array
 * @min: min num
 * @max: max num
 *
 * Return: new
 */

int *array_range(int min, int max)
{
	int *new;
	int i, num;

	if (min > max)
		return (NULL);
	num = max - min + 1;

	new = malloc(sizeof(int *) * num);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		new[i] = min + i;
	}
	return (new);
}

