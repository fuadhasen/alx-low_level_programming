#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end
 * @head: double pointer to first node
 * @n: data of the node
 *
 *
 * Return: newnode
 *
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnod->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}


