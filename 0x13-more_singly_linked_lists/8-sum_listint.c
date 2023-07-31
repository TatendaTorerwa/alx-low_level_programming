#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*sum_listint - calculates the sum of all the data in a listint_t list
*
*@head: first node in the linked list
*
*Return: resulting sum
*/

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}

	else
	{
		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
