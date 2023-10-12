#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in list
 *
 * @h: Head of the list.
 *
 * Return: Numbers of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
	{
		return (number);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
