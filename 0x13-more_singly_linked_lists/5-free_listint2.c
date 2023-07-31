#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint2 - frees a linked list
*
*@head: pointer to the listint_t list to be freed
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *currentnode;

	currentnode = *head;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	else
	{
		while (currentnode != NULL)
		{
			temp = currentnode;
			currentnode = currentnode->next;
			free(temp);
		}

		*head = NULL;
	}
}
