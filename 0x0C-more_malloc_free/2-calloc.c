#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - similar to calloc function.
 * @nmemb: number of elemets
 * @size: number of bytes in one nmemb
 * Return: pointer p.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p = malloc(nmemb * size);
if (p == NULL || nmemb == 0 || size == 0)
return (0);
for (i = 0; i < nmemb * size; i++)
p[i] = 0;
return (p);
}
