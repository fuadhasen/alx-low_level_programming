#include "lists.h"
#include <stdlib.h>

/**
 * add_node - to ios::beg
 * @head: ptr
 * @str: string
 *
 * Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
