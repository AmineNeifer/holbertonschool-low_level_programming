#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creating an array
 * @min: min value.
 * @max: max value.
 * Return: pointer p.
 */
int *array_range(int min, int max)
{
int n, i;
int *p;
n = max - min + 1;
if (n < 1)
return (0);
p = malloc(sizeof(int) * (n));
if (p == NULL)
return (0);
for (i = 0; i < n; i++)
p[i] = i + min;
return (p);
}
