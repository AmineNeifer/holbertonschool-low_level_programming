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
if (n < 98)
for (i = n; i <= 98; i++)
{
if (i == 98)
printf("%d\n", i);
else
printf("%d, ", i);
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i == 98)
printf("%d\n", i);
else
printf("%d, ", i);
}
}
else
printf("%d\n", n);
}
