#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);
new->n = n;
new->next = *head;
*head = new;
return (new);
}