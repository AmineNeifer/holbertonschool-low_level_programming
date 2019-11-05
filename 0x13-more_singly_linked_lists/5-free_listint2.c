#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
 * 
 * 
 */
void free_listint2(listint_t **head)
{
listint_t *p;
while ((*head)!= NULL)
{
p = (*head)->next;
free((*head)->n);
free(*head);
*head = p;
}
head = NULL;
}
