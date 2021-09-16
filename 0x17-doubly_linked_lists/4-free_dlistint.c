#include "lists.h"
/**
* free_dlistint- frees a dlistint_t lis
* @head: head of the list
* Return: number of elements
*/
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = NULL;
    dlistint_t *next = NULL;

    while (head != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
