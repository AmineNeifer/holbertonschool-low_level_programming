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
while (head->next != NULL)
{
head = head->next;
free(head->prev);
}
free(head);
}
