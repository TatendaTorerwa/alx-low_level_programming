#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*reverse_listint - reverses a listint_t linked list.
*
*@head: pointer to the first node in the list
*
*Return: pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *prevnode, *temp;

	prevnode = 0;

	temp = nextnode = *head;

	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		temp->next = prevnode;
		prevnode = temp;
		temp = nextnode;
	}
	*head = prevnode;

	return (*head);
}
