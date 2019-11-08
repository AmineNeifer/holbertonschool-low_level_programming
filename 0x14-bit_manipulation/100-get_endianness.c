#include "holberton.h"
#include <stdio.h>
/**
 * get_endianness - checks whether the processor is little or big endian.
 *
 * Return: 0 if big, 1 if little.
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
if (*c)
return (1);
else
return (0);
}
