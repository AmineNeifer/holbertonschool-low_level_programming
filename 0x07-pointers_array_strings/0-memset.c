#include "holberton.h"
/**
 * *memset - fill memory with a constant byte.
 * @s : pointer.
 * @b : char type.
 * @n : unsigned int type.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
