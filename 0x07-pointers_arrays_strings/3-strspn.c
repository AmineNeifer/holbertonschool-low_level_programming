#include "holberton.h"
/**
 * _strspn - copies memory area.
 * @s: pointer.
 * @accept: pointer.
 * Return: adresse or 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int b;
unsigned int n = 0;
for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
for (b = 0; accept[b] != '\0'; b++)
if (s[i] == accept[b])
n++;
return (n);
}
