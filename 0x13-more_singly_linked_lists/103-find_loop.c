#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*find_listint_loop - finds the loop in a linked list.
*
*@head: linked list to search for
*
*Return: address of the node where the loop starts, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *q;

	p = head;
	q = head;

	while (p && q && q->next)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
		{
			break;
		}
	}
	if (p != q)
	{
		return (NULL);
	}

	p = head;

	while (p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (p);
}
