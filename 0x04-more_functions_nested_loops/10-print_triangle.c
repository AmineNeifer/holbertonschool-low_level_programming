#include "holberton.h"
/**
 * print_triangle - printing triangles
 * @size: int type
 * Return: none.
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = size; i > 0; i--)
{
for (j = 1; j <= size; j++)
{
if (j >= i)
_putchar('#');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
