#include <stdio.h>

/**
 * binary_search - function for search algorithm
 * @array: DS to be searched
 * @size: size of the array
 * @value: wanted value
 *
 * Return: -1 for Error, or index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int mid_idx = (0 + (size - 1)) / 2;

	if (array == NULL || size == 0)
		return (-1);


	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
	if (array[mid_idx] == value)
		return (mid_idx);

	if (array[mid_idx] < value)
	{
		int new_size = (size - 1) - mid_idx;
		int res = binary_search(array + mid_idx + 1, new_size, value);

		return ((res == -1) ? -1 : mid_idx + 1 + res);
	}
	else if (array[mid_idx] > value)
	{
		return (binary_search(array, mid_idx, value));
	}
	return (-1);
}
