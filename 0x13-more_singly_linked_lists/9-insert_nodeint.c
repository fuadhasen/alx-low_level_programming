#include "lists.h"

/**
 * *insert_nodeint_at_index - insert
 * @head: head ptr
 * @idx: index
 * @n: data
 *
 * Return: null or new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *prev;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	prev = NULL;
	while (temp)
	{
		if (i == idx)
		{
			if (prev == NULL)
			{
				new->next = temp;
				*head = new;
			}
			else
			{
				new->next = temp;
				prev->next = new;
			}
			return (new);
		}
		i++;
		prev = temp;
		temp = temp->next;
	}
	return (NULL);
}
