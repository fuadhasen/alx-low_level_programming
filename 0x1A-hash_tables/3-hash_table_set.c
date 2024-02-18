#include "hash_tables.h"
/**
 * hash_table_set - set the node on the hash table
 * @key: key
 * @value: value to be stored on the Ht
 * @ht: pointer to Ht
 *
 * Return: 1 success, 0 Fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *new;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	while(head)
	{
		if (strcmp(head->key, key) == 0)
		{
			strcpy(head->value, value);
			return (1);
		}
		head = head->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	if (head == NULL)
	{
		new->next = NULL;
		ht->array[idx] = new;
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
