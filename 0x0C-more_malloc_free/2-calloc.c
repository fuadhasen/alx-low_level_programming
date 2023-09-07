#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocat for array
 * @nmemb: memeber of array
 * @size: how much space ex sizeofchar
 *
 * Return: new
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		new[i] = malloc(size);
		if (new[i] == NULL)
			return (NULL);
	}
	return (new);
}

