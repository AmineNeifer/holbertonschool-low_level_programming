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
if (index > 31)
return (-1);
return ((n >> index) & 1);
}
