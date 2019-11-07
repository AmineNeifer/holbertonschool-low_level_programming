#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - convert a binary to a positive int.
 * @b: pointer to the binary code.
 * Return: decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int digit, r = 0, powie;
int n = 0, i;
if (b == NULL)
return (0);
while (b[n])
n++;
if (n == 0)
return (0);
if (n != 1)
{
i = n - 1;
while (i >= 0)
{
digit = bin_check(b[i]);
if (digit == 2)
return (0);
if (b[i] == '1')
{
powie = n - i;
while (powie > 1)
{
digit *= 2;
powie--;
}
}
else
powie--;
r += digit;
i--;
}
}
else
{
digit = bin_check(b[0]);
r += digit;
}
return (r);
}
/**
 * bin_check - checks whether it is a 1 or 0.
 * @b: char.
 * Return: 1 if b == '1', 0 if b == '0' and -1 if b diff from 1 and 0.
 */
unsigned int bin_check(char b)
{
if (b == '1')
return (1);
else if (b == '0')
return (0);
else
return (2);
}
