#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free all the list by traversing
 * @head: pointer to the first node
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *nxt;

	temp = head;
	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp);
		temp = *nxt;
	}
}
