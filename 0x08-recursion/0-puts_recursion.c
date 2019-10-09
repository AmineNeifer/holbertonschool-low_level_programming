#include "holberton.h"
/**
 * _puts_recursion - puts function built using recursion.
 * @s: string.
 * Return: N/A.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
