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
listint_t *current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
if (head == NULL)
return (NULL);

if (*head == NULL)
*head = new;

new->n = n;

if (idx == 0)
{
new->next = (*head)->next;
*head = new;
return (new);
}
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
if (current == NULL)
{
free(new);
return (NULL);
}
}
new->next = current->next;
current->next = new;
return (new);
}
