#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at a given position.
 *
 * @h: Head of the node
 *
 * @idx: The position to insert a node.
 *
 * @n: Value of the new node.
 *
 * Return: Address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *newnode;
	unsigned int position = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	temp = *h;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}

		while (position < idx - 1)
		{
			temp = temp->next;
			position++;
		}

		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}

	return (newnode);
}

