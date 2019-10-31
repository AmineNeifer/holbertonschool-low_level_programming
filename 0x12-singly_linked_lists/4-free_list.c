#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees malloc.
 * @head: list.
 * Return: void.
 */
void free_list(list_t *head)
{
free(head);
}
