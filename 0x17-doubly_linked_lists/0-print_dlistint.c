#include "lists.h"

/**
 * print_dlistint - Prints all the elements of doubly linked list.
 *
 * @h: head of the list
 *
 *Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
