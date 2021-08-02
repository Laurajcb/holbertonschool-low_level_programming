#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint- prints all the elements of a listint_t.
 * @h:head of my linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter += 1;
	}
	return (counter);
}
