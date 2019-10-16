#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of characters
 * @size: size of the array.
 * @c: is a character.
 * return: 0 if malloc fails or if size = 0 otherwise return pointer to c.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
return (0);
else 
{
p = malloc(sizeof(c) * size);
if (p == NULL)
return (0);
else
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
}
