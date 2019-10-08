#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - printing sum.
 * @a: array;
 * @size: numbers of columns.
 * return: N/A.
 */
void print_diagsums(int *a, int size)
{
int i;

 for (i = 0; i <= size; i++)
{
printf("%d, ", *(a + i));
}
}
