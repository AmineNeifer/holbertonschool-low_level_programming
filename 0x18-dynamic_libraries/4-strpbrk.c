#include "holberton.h"
/**
 * *_strpbrk - only writes some of the characters.
 * @s: string.
 * @accept: string.
 * Return: adresse or 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int l = 0;
int j = 0;
while (s[l] != '\0')
l++;
while (i <= l)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
s = s + i;
return (s);
}
}
i++;
}
if (i < l)
s[i + 1] = '\0';
return (0);
}
