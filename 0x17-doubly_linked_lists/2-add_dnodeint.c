#include "lists.h"
/**
* dlistint_len - retunr all the elements of a dlistint_t list
* @h: head of the list
* Return: number of elements
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t *));
    if (new_node == NULL)
    {
        return (NULL);
    }
    if (head == NULL)
    {
        return (NULL);
    }
    new_node->n = n;
    new_node->next = *head;

    *head = new_node;
    return (*head);
}
