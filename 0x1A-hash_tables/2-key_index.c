#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate hash value
 * @size: size of Ht
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key);
	return (i % size);
}

