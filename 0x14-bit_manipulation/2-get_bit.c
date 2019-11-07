#include"holberton.h"
#include <stdio.h>
/**
 * get_bit - get bit by index.
 * @n: unsigned long int.
 * @index: unsigned long int.
 * Return: n.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (index == 0)
{
if (n & 1)
return (1);
else
return (0);
}
else if (index == 1)
{
n = n >> 1;
if (n & 1)
return (1);
else
return (0);
}
for (i = 0; i < index; i++)
n = n >> 1;
while (n != 0 && n != 1)
n = n << 1;
return (n);
}
