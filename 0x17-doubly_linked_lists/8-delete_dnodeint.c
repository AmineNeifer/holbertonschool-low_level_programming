#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the nth node.
 * @head: first node of the list.
 * @index: index of node to delete.
 * Return: 1 if succeeded, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *current = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
while (current && i < index)
{
i++;
current = current->next;
}
if (current == NULL)
return (-1);
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
