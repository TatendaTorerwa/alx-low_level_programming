#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint_end -  adds a new node at the end of a listint_t list.
*
*@head:  pointer to the first element in the list
*
*@n: data to insert in the new element
*
*Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}

	else
	{
		temp = *head;

		while (temp->next != 0)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}
	return (newnode);
}
