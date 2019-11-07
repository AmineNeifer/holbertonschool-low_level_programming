#include "holberton.h"
#include <stdio.h>
/**
 * print - helper of print_binary.
 * @n: unsigned integer.
 * Return: N/A.
 */
void print(unsigned int n)
{
if (n != 0)
{
print(n >> 1);
if ((n & 1) == 1)
{
putchar('1');
}
else
{
putchar('0');
}
}
}
/**
 * print_binary - a number in binary base.
 * @n: unsigned int.
 * Return: N/A.
 */
void print_binary(unsigned long int n)
{
if (n == 0)
putchar('0');
else
print(n);
}
