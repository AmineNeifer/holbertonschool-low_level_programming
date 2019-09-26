#include "holberton.h"
/**
 * print_diagonal - draws a diagonals.
 * @n: int type.
 * Return: none.
 */
void print_diagonal(int n)
{
int j, c;
if (n > 0)
for (c = 0; c < n; c++)
{
for (j = 0; j < c; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
