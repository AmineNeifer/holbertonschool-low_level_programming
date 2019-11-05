#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - calculate the number of elements.
 * @h: list.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
if (h == 0)
return (0);
while (h)
{
i++;
h = h->next;
}
return (i);
}
