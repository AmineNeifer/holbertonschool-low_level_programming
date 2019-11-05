#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - add a node to the first of a list.
 * @head: pointer to the first node.
 * @n: data of a node.
 * Return: adress of the new element.
 */
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
