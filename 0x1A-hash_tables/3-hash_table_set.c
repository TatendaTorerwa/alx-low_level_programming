#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 *@ht: The hash table.
 *
 *@key: The key.
 *
 *@value: The value associated with the key.
 *
 *Return: 1 (success)
 *        otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *newnode, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			char *newvalue = strdup(value);

			if (newvalue == NULL)
				return (0);
			free(current->value);
			current->value = newvalue;
			return (1);
		}
		current = current->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (newnode->key == NULL || newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
