#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add a node to the end of a list.
 * @head: pointer to the first node of the list.
 * @n: data.
 * Return: pointer to the end of the list or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *current = *head;
if (new != NULL)
{
while (current && current->next)
current = current->next;
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
current->next = new;
}
}
return (NULL);
}
