#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth
 *     node of a listint_t linked list
 * @head:head of my linked list
 * @index:the index of the node to locate, starting at 0
 * Return: if node does no exist NULL.
 *	if exist  located node.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
		head = head->next;
	}
	return (head);
}
