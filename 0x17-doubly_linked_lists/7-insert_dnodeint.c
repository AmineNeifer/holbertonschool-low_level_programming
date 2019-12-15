#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given index.
 * @h: first node.
 * @idx: idx we want to put node in.
 * @n: the data of the new node to insert.
 * Return: address of new node, NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *current = *h;
dlistint_t *new;
if (*h == NULL && idx == 0)
{
(*h)->n = n;
(*h)->prev = NULL;
(*h)->next = NULL;
return (*h);
}
else if (*h == NULL && idx != 0)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (idx == 0)
return (add_dnodeint(h, n));
while (current != NULL && i < idx)
{
i++;
current = current->next;
}
if (i == idx)
{
if (current == NULL)
return (add_dnodeint_end(h, n));
new->next = current;
new->prev = current->prev;
current->prev->next = new;
current->prev = new;
}
else 
return (NULL);
return (new);
}
