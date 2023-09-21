#include "lists.h"

/**
 * list_len - length
 * @h: header
 *
 *
 * Return: count
 */

size_t list_len(const list_t *h)
{
	const list_t *new;
	int count = 0;

	new = h;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
