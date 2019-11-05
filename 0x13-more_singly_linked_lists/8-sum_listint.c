#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of data.
 * @head: pointer to the first node.
 * Return: sum of data(n)
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
if (head == NULL)
return (0);
sum += head->n;
while (head != NULL && head->next != NULL && current->next != NULL)
{
current = current->next;
sum += current->n;
}
return (sum);
}
