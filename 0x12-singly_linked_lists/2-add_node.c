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
	int counter;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter += 1;
	}
	return (counter);
}

/**
 * add_node- elements of a list_t list.
 * @head:head of my linked list
 * @str: string to be use
 * Return: direction of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
