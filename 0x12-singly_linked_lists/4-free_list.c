#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list- function that frees a list_t list.
 * @head: pointer to the first struct
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
