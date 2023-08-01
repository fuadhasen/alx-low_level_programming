#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the memory 
 *
 * @head: pointer for first head
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}