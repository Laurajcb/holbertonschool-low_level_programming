#include "lists.h"
/**
* dlistint_len - retunr all the elements of a dlistint_t list
* @h: head of the list
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t leng = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		leng++;
		h = h->next;
	}
	return (leng);
}
