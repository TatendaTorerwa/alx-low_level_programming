#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*listint_len - returns the number of elements in a linked listint_t list
*
*@h: linked list of type listint_t to traverse
*
*Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
