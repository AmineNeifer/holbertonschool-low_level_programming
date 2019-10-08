#include "holberton.h"
/**
 * *_strchr - find a char in a string.
 * @s: string.
 * @c: char.
 * Return: 0 or s + i.
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
break;
}
if (s[i] == '\0')
return (0);
else
return (s + i);
}
