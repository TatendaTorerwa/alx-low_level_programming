#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position.
*
*@head: pointer to the first node in the list
*
*@n: data to insert in the new node
*
*@idx: index where the new node is added
*
*Return:  pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i = 1, count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
		}
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		temp->next = newnode;

		return (newnode);
	}
}
