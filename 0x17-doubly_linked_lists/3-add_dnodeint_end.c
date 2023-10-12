#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a list.
 *
 * @head: Head of the list.
 *
 * @n: Element of the newnode.
 *
 * Return: Address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	newnode->next = NULL;

	 temp = *head;

	if (temp != NULL)
	{

		while (temp->next != NULL)
		{

			temp = temp->next;
		}
		temp->next = newnode;
	}
	else
	{
		*head = newnode;
	}
	 newnode->prev = temp;

	return (newnode);
}
