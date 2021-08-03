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
	listint_t *move;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t *));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	move = *head;

	while (move != NULL)
	{
		if (i + 1 == idx)
		{
			new_node->next = move->next;
			move->next = new_node;
			return (new_node);
		}
		i++;
		move = move->next;
	}
	free(new_node);
	return (NULL);
}
