#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;

	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	*head = NULL;
}

