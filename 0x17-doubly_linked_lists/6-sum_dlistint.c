#include "lists.h"

/**
 * sum_dlistint - Returns all the data of a list
 *
 * @head: Head of the list.
 *
 * Return: The sum of data
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}

		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
