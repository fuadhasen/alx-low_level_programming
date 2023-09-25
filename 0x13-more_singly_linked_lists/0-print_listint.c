 #include "lists.h"

/**
 * print_listint - print linked list
 * @h: head ptr
 *
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	int count = 0;

	new = h;
	while (new)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}

