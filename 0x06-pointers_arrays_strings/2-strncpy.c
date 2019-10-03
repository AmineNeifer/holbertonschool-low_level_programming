#include "holberton.h"
/**
 * *_strncpy - copy strings.
 * @dest: string.
 * @src: string.
 * @n: integer.
 * Return: .
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[n] = '\0';
return (dest);
}
