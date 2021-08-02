#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint- frees the listint_t
 * @head:head of my linked list
 *
 * Return: 0 if SLL is empty.
 **/

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (n);
}
