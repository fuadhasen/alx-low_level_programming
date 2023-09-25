#include "lists.h"

/**
 * *add_nodeint - add @ ios::beg
 * @head: head ptr
 * @n: n
 *
 * Return: new
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
