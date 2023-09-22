#include <stdlib.h>
#include "lists.h"

/**
 * list_len - On a linked list all number of elements are returned.
 * @h: pointer on list_t list
 *
 * Return: number of elements on h
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

