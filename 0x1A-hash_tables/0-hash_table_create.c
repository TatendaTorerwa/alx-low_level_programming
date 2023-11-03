#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int p;

	if (size == 0)
	{
		return (NULL);
	}

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < size; p++)
	{
		ht->array[p] = NULL;
	}

	return (ht);
}
