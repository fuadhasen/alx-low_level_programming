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
	int i;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int *) * (max - min));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < max - min; i++)
	{
		new[i] = min + i;
	}
	return (new);
}

