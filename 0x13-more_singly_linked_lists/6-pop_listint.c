#include "lists.h"

/**
 * pop_listint - pop head
 * @head: ptr
 *
 *
 * Return: a
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	a = temp->n;
	free(temp);

	return (a);
}

