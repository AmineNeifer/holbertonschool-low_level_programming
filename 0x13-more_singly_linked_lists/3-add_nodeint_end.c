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
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
(*head) = new;
return (new);
}
while (1)
{
if ((*head)->next == NULL)
{
    (*head)->next = new;
    return (new);
    break;
}
*head = (*head)->next;
}
(*head)->next = new;
return (new);
}
