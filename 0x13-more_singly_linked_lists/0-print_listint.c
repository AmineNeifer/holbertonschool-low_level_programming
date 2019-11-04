#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
size_t numb = 0;
if (h == 0|| h->n == 0)
return (0);
while (h != 0)
{
printf("%d\n", h->n);
numb++;
h = h->next;
}
return (numb);
}
