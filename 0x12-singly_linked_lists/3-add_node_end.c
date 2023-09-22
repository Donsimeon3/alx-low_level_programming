#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A new nod is added at the end of a linked list.
 * @head: double pointer on the list_t list
 * @str: Put strings on the new node
 * Return: A new element on the addres, or not if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}

