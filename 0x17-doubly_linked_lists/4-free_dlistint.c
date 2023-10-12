#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 *
 * @head: Head pof the list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = head;

	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
			free(temp->prev);
		}
		free(temp);
	}
}
