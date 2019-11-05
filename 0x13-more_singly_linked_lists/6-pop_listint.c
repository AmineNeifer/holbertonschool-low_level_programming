#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the first node of a list.
 * @head: pointer to the first node.
 * Return: n of the first node.
 */
int pop_listint(listint_t **head)
{
int d;
listint_t *p;
d = (*head)->n;
p = (*head)->next;
free(*head);
*head = p;
return (d);
}
