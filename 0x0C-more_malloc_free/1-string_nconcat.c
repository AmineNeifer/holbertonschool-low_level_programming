#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * string_nconcat - concatinating two strings
  * @s1: String.
  * @s2: String type.
  * @n: integer type.
  * Return: p pointer.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i, final;
unsigned int i1 = 0;
unsigned int i2 = 0;
while (s1[i1] != '\0')
i1++;
while (s2[i2] != '\0')
i2++;
if (n < i2)
i2 = n;
final = i1 + i2;
final++;
p = malloc(final *sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < i1; i++)
p[i] = s1[i];
for (i = 0; i < i2; i++)
p[i + i1] = s2[i];
p[final - 1] = '\0';
return (p);
}
