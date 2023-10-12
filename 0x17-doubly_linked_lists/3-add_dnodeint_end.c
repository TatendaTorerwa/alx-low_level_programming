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
	dlistint_t *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	newnode->next = NULL;

	/* if the list is empty make newnode head*/

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}


	 temp = *head;

	while (temp->next != NULL)
	{
		current = temp;

		temp = temp->next;
	}
	 temp->next = newnode;
	 newnode->prev = current;

	return (newnode);
}
