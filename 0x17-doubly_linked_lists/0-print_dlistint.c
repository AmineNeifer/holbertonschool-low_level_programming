#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a list
 * @h: head of the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t num = 0;
if (h == NULL)
{
printf("0\n");
return (0);
}
while (h != NULL)
{
num++;
printf("%d\n", h->n);
h = h->next;
}
return (num);
}
