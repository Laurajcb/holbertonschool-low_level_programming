#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2- frees the listint_t
 * @head:head of my linked list
 *
 * Return: 0.
 **/
void free_listint2(listint_t **head)
{
	listint_t *next;

	next = NULL;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
