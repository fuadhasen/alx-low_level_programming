#include <lists.h>
#include <stdio.h>

/**
 * listint_len - list length
 *
 * @h: head pointer to first node
 *
 * Return: return number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
