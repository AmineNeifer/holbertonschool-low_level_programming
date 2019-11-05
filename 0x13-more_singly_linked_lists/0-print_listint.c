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
if (h == 0)
return (0);
while (h != 0)
{
numb++;
printf("%d\n", h->n);
h = h->next;
}
return (numb);
}
