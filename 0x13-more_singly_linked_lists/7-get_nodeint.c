#include "lists.h"

/**
 * *get_nodeint_at_index - get
 * @head: head ptr
 * @index: idx
 *
 * Return: null or temp
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp)
	{
		if (index == i)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
