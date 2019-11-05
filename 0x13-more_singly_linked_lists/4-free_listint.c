#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - free list.
 * @head: pointer to the list.
 * Return: N/A.
 */
void free_listint(listint_t *head)
{
listint_t *p;
while (head != NULL)
{
p = head->next;
free(head);
head = p;
}
}
