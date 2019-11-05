#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int pop_listint(listint_t **head)
{
int d;
listint_t *p;
d = (*head)->n;
p = (*head)->next;
free (*head);
*head = p; 
return (d);
}
