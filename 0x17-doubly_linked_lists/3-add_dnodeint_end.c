#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a doubly linked list.
 * @head: head of the list.
 * @n: data of the node.
 * Return: address of new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *current;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
current = *head;
new->n = n;
new->prev = NULL;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (current != NULL && current->next != NULL)
current = current->next;
new->prev = current;
current->next = new;
current = new;
}
return (new);
}
