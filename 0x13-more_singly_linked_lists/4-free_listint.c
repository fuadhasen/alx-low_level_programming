#include "lists.h"

/**
 * free_listint - freeze the linked
 * @head: h ptr
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

