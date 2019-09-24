#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - count to 98.
 * @n: int type
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
for (i = n; i <= 98; i++)
{
printf("%d, ", i);
}
else
for (i = n; i >= 98; i--)
{
printf("%d, ", i);
}
}
