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

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
