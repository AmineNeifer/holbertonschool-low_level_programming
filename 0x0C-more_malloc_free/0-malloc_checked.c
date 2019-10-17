#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checking if malloc is not null.
 * @b: size we want to allocate
 * Return: the pointer p
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
