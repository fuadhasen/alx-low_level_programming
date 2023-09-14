#include "function_pointers.h"

/**
 * int_index - got index
 * @array: arr
 * @size: size
 * @cmp: func pointer
 *
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

