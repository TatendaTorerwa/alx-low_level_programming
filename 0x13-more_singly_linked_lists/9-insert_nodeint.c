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
	unsigned int i = 1;

	temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (temp != NULL && i < idx - 1)
		{
			temp = temp->next;
			i++;


			if (temp == NULL)
			{
				free(newnode);
				return (NULL);
			}
		}
		newnode->next = temp->next;
		temp->next = newnode;
		return (*head);


	}
}
