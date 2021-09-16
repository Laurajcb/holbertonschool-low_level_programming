#include "lists.h"
/**
* add_dnodeint_end- retunr all the elements of a dlistint_t list
* @head: head of the list
* @n: number
* Return: number of elements
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;

	new_node = malloc(sizeof(dlistint_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head)
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
