#include "lists.h"

/**
 * delete_nodeint_at_index - delet
 * @head: head ptr
 * @index: idx
 *
 * Return: 1, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
		prev->next = temp->next;
		free(temp);
		return (1);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	return (-1);
}

