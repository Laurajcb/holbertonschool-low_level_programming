#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint- function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head:head of my linked list
 *
 * Return: 0 if list is empty
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
