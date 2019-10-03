#include "holberton.h"
/**
 * reverse_array - reverse an array of int.
 * @a: array of int.
 * @n: size of a.
 * Return: N/A.
 */
void reverse_array(int *a, int n)
{
int i, c;
n--;
for (i = 0; i < n / 2; i++)
{
c = a[i];
a[i] = a[n -i];
a[n - i] = c;
}
}
