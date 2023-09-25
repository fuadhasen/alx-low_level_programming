#include "lists.h"

/**
 * listint_len - length of the list
 * @h: head ptr
 *
 * Return: i;
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new;
	int i = 0;

	new = h;
	while (new)
	{
		i++;
		new = new->next;
	}
	return (i);
}

