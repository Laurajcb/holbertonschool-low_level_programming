#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint- add node to be the new head.
 * @head:head of my linked list
 * @n: The value to add to the new node
 * Return: direcion of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t *));

		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
