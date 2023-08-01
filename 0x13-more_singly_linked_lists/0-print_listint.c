#include <lists.h>
#include <stdio.h>

/**
 * print_listint - print elements of the list
 * @h: head pointer
 *
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
