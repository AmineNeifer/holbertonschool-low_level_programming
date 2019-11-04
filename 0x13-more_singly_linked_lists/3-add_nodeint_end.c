#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 * 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
while ((*head)->next != NULL)
*head = (*head)->next;
new->n = n;
new->next = NULL;
(*head)->next = new;
return (new);
}
