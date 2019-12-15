#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free doubly linked list.
 * @head: head of list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head->next != NULL)
{
current = head->next;
free(head);
head = current;
}
}
