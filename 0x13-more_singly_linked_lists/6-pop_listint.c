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
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}

