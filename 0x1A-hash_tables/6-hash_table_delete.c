#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current, *temp;

	if (ht == NULL)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
