#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Create a two dimensional array of integers
  * @width: width of array
  * @height: heighht of array
  * Return: Pointer to this array
  */

int **alloc_grid(int width, int height)
{
int i1, i2, **p;
if (width <= 0 || height <= 0)
return (0);
p = malloc(sizeof(int *) * height);
if (p == NULL)
return (0);
for (i1 = 0; i1 < height; i1++)
{
p[i1] = malloc(sizeof(int) * width);
if (p[i1] == NULL)
{
for (i2 = 0; i2 < height; i2++)
free(p[i2]);
free(p);
return (0);
}
for (i2 = 0; i2 < width; i2++)
p[i1][i2] = 0;
}
return (p);
}
