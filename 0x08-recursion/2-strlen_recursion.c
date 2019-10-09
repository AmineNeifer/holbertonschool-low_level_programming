#include "holberton.h"
/**
 * _strlen_recursion - finding the length of a string.
 * @s: string to find it's length
 * Return: length.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
return (i + _strlen_recursion(s + 1));
}
else
return (0);
}
