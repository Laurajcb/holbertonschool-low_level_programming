#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint- frees the listint_t
 * @head:head of my linked list
 *
 * Return: 0.
 **/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
