#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a list.
 * @h: list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t numb = 0;
if (h == NULL)
return (0);
while (h != 0)
{
printf("%d\n", h->n);
numb++;
h = h->next;
}
return (numb);
}
