#include <stdio.h>

/**
 * linear_search - function for linear traversal
 * @array: data structure to be searched
 * @size: size of array
 * @value: target key
 *
 * Return: -1 for Error, otherwise index of target
 */

int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
                return (-1);

        for (i = 0; i < size; i++)
        {
                if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                        return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        }
        return (-1);
}
