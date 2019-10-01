#include "holberton.h"
/**
 * puts2 - prints a string.
 * @str: pointer
 * Return: N/A .
 */
void puts2(char *str)
{
int n;
n = 0;
while (*(str + n) != '\0')
{
_putchar(*(str + n));
n += 2;
}
_putchar('\n');
}
