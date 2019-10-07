#include "holberton.h"
/**
 * *_memcpy - copies memory area.
 * @dest: pointer.
 * @src: pointer.
 * @n: insigned int type.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
