#include "holberton.h"
/**
 * swap_int - swap two integers.
 * @a : pointer
 * @b : pointer
 * Return: N/A.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
