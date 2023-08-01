#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free all the list by traversing
 * @head: pointer to the first node
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
