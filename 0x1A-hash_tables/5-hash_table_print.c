#include "hash_tables.h"
/**
 * hash_table_print - print the hash table element
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			comma = 1;
		}
	}
	printf("}\n");
}
