#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - calculates number of bits changed.
 * @n: first number.
 * @m: second number.
 * Return: number of times we need to flip a bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0, a, b;
while (n || m)
{
a = n & 1;
b = m & 1;
if (a != b)
i++;
n = (n >> 1);
m = (m >> 1);
}
return (i);
}
