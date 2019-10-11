#include "holberton.h"
/**
 * _strcpy - cpy string
 * @dest: string
 * @src: string
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
int n, i;
n = 0;
while (*(src + n) != '\0')
n += 1;
for (i = 0; i < n; i++)
dest[i] = src[i];
dest[n] = '\0';
return (dest);
}
