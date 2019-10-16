#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * *str_concat - Concatenates two strings.
  * @s1: string
  * @s2: string
  * Return: A pointer to string or NULL.
  */
char *str_concat(char *s1, char *s2)
{
int i, length1 = 0, length2 = 0, l;
char *p;
if (s1 != NULL)
{
while (s1[length1] != '\0')
length1++;
}
if (s2 != NULL)
{
while (s2[length2] != '\0')
length2++;
}
l = length1 + length2;
l++;
p = malloc(l *sizeof(char));
if (p == NULL)
return (0);
for (i = 0; i < length1; i++)
p[i] = s1[i];
for (i = 0; i < length2; i++)
p[i + length1] = s2[i];
p[l - 1] = '\0';
return (p);
}
