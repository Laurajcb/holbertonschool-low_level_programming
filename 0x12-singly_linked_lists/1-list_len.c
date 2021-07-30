#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len- elements of a list_t list.
 * @h:head of my linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter += 1;
	}
return (counter);
}
