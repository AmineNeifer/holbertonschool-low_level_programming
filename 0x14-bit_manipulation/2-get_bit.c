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
int d;
if (index == 0)
{
if (n & 1)
return (1);
else
return (0);
}
else if (index == 1)
{
d = n >> 1;
if (d & 1)
return (1);
else
return (0);
}
d = n >> index;
while (d != 0 && d != 1)
d = d << 1;
return (d);
}
