#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - excute array
 * @array: arr
 * @size: size
 * @action: func pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array != NULL)
				action(array[i]);
		}
	}
}

