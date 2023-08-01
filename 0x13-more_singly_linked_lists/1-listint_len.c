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
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
