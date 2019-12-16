#include "holberton.h"
/**
 * _strcmp - string comparisation
 * @s1: string.
 * @s2: string.
 * Return: the value of k
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
int k = 0;
while (s1[i] != '\0')
i++;
while (j < i && k == 0)
{
k = s1[j] - s2[j];
j++;
}
return (k);
}
