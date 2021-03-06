#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a given index.
 * @head: pointer to the first node.
 * @index: index of the node we look for.
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *current = head;
if (head == NULL)
return (NULL);
if (index == 0)
return (head);
while (head != NULL && head->next != NULL && n <= index)
{
current = current->next;
n++;
if (n == index)
return (current);
}
return (NULL);
}
