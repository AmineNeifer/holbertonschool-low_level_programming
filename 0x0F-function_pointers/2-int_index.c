#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for a number.
 * @array: array.
 * @size: size of the array.
 * @cmp: pointer to a func.
 * Return: i otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || *cmp == 0 || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
printf("i = %d and size = %d\n", i, size);
return (-1);
}
