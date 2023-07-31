#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint -  frees a listint_t list
*
*@head: listint_t list to be freed
*
*/

void free_listint(listint_t *head)
{
	listint_t *temp, *currentnode;

	temp = currentnode = head;

	while (currentnode != NULL)
	{
		temp = currentnode;
		currentnode = currentnode->next;
		free(temp);
	}
}
