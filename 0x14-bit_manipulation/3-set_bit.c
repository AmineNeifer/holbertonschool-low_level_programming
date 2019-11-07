#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - change bit to 1 at a given index.
 * @n: pointer.
 * @index: ndex of bit we want to make 1 if it is not already.
 * Return: 1 if works and -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 31)
return (-1);
*n = *n | (1 << index);
return (1);
}
