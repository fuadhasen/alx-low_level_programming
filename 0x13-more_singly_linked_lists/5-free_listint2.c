#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free list and make head Null
 * @head: double pointer
 *
 * Return: no return
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *nxt;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != 0)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
	*head = NULL;
}
