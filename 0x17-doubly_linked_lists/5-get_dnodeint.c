#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of the list.
 *
 * @head: Head of the node
 *
 * @index: The index of the node.
 *
 * Return: The required node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (position == index)
		{
			return (temp);
		}
		temp = temp->next;
		position++;
	}
	return (NULL);
}
