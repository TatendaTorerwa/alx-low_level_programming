#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
*
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lion, *cow;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lion = head->next;
	cow = (head->next)->next;

	while (cow)
	{
		if (lion == cow)
		{
			lion = head;
			while (lion != cow)
			{
				nodes++;
				lion = lion->next;
				cow = cow->next;
			}

			lion = lion->next;
			while (lion != cow)
			{
				nodes++;
				lion = lion->next;
			}

			return (nodes);
		}

		lion = lion->next;
		cow = (cow->next)->next;
	}

	return (0);
}

/**
* print_listint_safe - Prints a listint_t list safely.
*
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}








