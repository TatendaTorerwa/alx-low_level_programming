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
	dlistint_t *temp, *newnode;
	unsigned int position = 0, length = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*h == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*h = newnode;
		return (newnode);
	}


	temp = *h;

	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	if (idx > length )
	{
		free(newnode);
		return (NULL);
	}
	temp = *h;
	position = 0;
	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (position < idx - 1)
	{
		temp = temp->next;
		position++;
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}

