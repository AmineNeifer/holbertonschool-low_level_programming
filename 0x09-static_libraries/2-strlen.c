#include "holberton.h"
/**
 * _strlen - prints the length of a string.
 * @s: pointer
 * Return: n.
 */
int _strlen(char *s)
{
int n;
n = 0;
while ((*(s + n)) != '\0')
{
n += 1;
}
return (n);
}
