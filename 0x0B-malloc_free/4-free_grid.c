#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - freeing the grid allocation
  * @grid: 2d array
  * @height: heighht of array
  * Return: Pointer to this array
  */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
