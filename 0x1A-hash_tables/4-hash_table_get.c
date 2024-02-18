#include "hash_tables.h"
/**
 * hash_table_set - set the node on the hash table
 * @key: key
 * @value: value to be stored on the Ht
 * @ht: pointer to Ht
 *
 * Return: 1 success, 0 Fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        hash_node_t *head, *temp;
        unsigned long int idx;

        if (key == NULL || ht == NULL)
                return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
        head = ht->array[idx];
        if (head == NULL)
        {
		return (NULL);
        }
        else
        {
                if (strcmp(head->key, key) == 0)
                {
                        return (head->value);
		}
                else
		{
			temp = head;
			while(temp)
			{
				if (strcmp(temp->key, key) == 0)
					return (temp->value);
				temp = temp->next;
			}
		}
	}
	return (NULL);
}
