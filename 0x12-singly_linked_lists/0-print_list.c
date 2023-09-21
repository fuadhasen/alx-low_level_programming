#include "lists.h"

/**
 * print_list - print the list
 * @h: head pointer
 *
 *
 * Return: num of nod
 */

size_t print_list(const list_t *h)
{
	const list_t *new1;
	int count = 0;

	new1 = h;
	while (new1 != NULL)
	{
		if (new1->str != NULL)
		{
			printf("[%lu] %s\n", new1->len, new1->str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		}
		new1 = new1->next;

	}
	return (count);
}



