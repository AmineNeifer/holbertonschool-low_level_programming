#include "holberton.h"
/**
 * print_rev - print a string in rev.
 * @s: pointer.
 * Return: Always 0.
 */
void print_rev(char *s)
{
int n, i;
n = 0;
while (*(s + n) != '\0')
n += 1;
for (i = n; i >= 0; i--)
_putchar(*(s +i));
_putchar('\n');
}
