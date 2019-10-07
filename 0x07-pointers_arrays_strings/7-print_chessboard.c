#include "holberton.h"
/**
 * print_chessboard - printing chessboard.
 * @a: 2D array;
 * return: N/A.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
if (j == 7)
_putchar('\n');
}
}
