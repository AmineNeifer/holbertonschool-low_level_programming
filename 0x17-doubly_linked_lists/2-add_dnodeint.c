#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add node in the beginning of a doubly linked list.
 * @head: first node.
 * @n: data for the new node.
 * Return: address of new node or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
(*head)->prev = new;
(*head) = new;
return (*head);
}
