#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - getting the nth node of a list.
 * @head: first node.
 * @index: index of the node wanted.
 * Return: node , NULL if doesn't exit.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;
dlistint_t *current = head;
if (head == NULL)
return (NULL);
while (current != NULL && n < index)
{
current = current->next;
n++;
}
if (current == NULL)
return (NULL);
return (current);
}
