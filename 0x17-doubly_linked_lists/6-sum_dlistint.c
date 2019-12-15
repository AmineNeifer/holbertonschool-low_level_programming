#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum of int data of the nodes.
 * @head: first node.
 * Return: sum of int data of the lists nodes.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int i = head->n;
if (head == NULL)
return (0);
if (head && head->next == NULL)
return (i);
while (current && current->next)
{
current = current->next;
i += current->n;
}
return (i);
}
