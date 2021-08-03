#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a new node to a listint_t
 * list at a given position.
 * @head: pointer to the head of the listint_t list.
 * @index: The index of the listint_t list where the new
 * Return: If the function fails -1 if not 1
 *
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *move = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	while (move != NULL)
	{
		if (index == counter + 1)
		{
			delete = move->next;
			move->next = delete->next;
			free(delete);
			return (1);
		}
		if (index == 0)
		{
			*head = move->next;
			free(move);
			return (1);
		}
		move = move->next;
		counter++;
	}
	return (-1);

}
