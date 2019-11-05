#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inset a node inside a list.
 * @head: pointer to the first node.
 * @idx: index where we want to put our node.
 * @n: data.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
listint_t *current = *head;
if (head == NULL)
return (NULL);
while (current != NULL && current->next != NULL && i < idx)
{
current = current->next;
i++;
}
if (i < idx)
return (NULL);
new->n = n;
if (current->next == NULL)
{
current->next = new;
new->next = NULL;
}
else
{
new->next = current->next;
current->next = new;
}
return (new);
}
