#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen- gets the length of string
 * @str: string to optain leng
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter += 1;
	}
	return (counter);
}

/**
 * add_node_end- adds last element of a list_t list.
 * @head:head of my linked list
 * @str: string to be use
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	current = *head;

	new_node = (list_t *)malloc(sizeof(list_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
