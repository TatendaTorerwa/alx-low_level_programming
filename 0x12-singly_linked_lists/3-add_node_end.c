#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*add_node_end - adds a new node at the end of a linked list
*
*@head: double pointer to the list_t list
*
*@str: string to put in the new node
*
*Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}


	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;

		return (newnode);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
