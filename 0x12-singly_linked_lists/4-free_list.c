#include "lists.h"

/**
 * free_list - free
 * @head: h
 *
 * Return: no
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *new;

	while (temp != NULL)
	{
		new = temp->next;
		free(temp->str);
		free(temp);
		temp = new;
	}
}
