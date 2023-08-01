#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint_safe - frees a listint_t list.
*
*@h: pointer to the first node in the linked list
*
*Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *p, *q;

	while (p->next ! q)
	{
		p = p->next;
		q = q->next;
	}
	p->next = NULL;
}
