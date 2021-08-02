#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len- prints all the elements of a listint_t.
 * @h:head of my linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter += 1;
	}
	return (counter);
}
