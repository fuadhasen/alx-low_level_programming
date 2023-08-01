#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node at beggining
 * @head: head pointer
 * @n: the data
 *
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
