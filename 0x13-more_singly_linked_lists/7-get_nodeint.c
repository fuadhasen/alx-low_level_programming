#include "lists.h"
/**
 * get_nodeint_at_index - nth node of list
 *
 * @head: head pointer
 * @index: node index
 *
 * Return: index pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
