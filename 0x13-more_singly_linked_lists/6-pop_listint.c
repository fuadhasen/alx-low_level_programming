#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pop the head node
 * @head: head of the list
 *
 * Return: data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	head = temp->next;
	free(temp);

	return (temp->n);
}

