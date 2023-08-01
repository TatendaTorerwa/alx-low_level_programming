#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*get_nodeint_at_index -  returns the nth node of a listint_t linked list.
*
*@head: first node in the linked list
*
*@index: index of the node to return
*
*Return: pointer to the node we're looking for, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;

	listint_t *temp;

	temp = head;

	while (temp && p < index)
	{
		temp = temp->next;
		p++;
	}
	return (temp ? temp : NULL);
}
