#include "holberton.h"
/**
 * *_strchr - find a char in a string.
 * @s: string.
 * @c: char.
 * Return: 0 or s + i.
 */
char *_strchr(char *s, char c)
{
int i, j;
j = 0;
while (s[j])
j++;
for (i = 0; i <= j; i++)
{
if (s[i] == c)
return (s + i);
}
return (0);
}
