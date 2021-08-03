#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 * list at a given position.
 * @head: pointer to the head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n:The integer that is going to contain the new node.
 * Return: If the function fails - NULL.
 * or the address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *aux_head = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t *));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	while (head != NULL)
	{
		if (i == idx)
		{
			new_node->next = aux_head->next;
			aux_head->next = new_node;
			return (new_node);
		}

		aux_head = aux_head->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
