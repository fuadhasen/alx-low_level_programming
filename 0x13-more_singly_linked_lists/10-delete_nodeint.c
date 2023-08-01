#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delet node at given index
 *
 * @head: pointer to first node
 * @index: index
 *
 * Return: pointer to next node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *temp, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	temp = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	nxt = temp->next;
	temp->next = nxt->next;
	free(nxt);
	return (1);

}
