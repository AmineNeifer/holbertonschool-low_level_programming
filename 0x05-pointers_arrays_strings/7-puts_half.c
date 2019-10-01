#include "holberton.h"
/**
 * puts_half - prints half the string.
 * @str: pointer
 * Return: none
 */
void puts_half(char *str)
{
int s, n, i, j;
n = 0;
while (*(str + n) != '\0')
n++ ; 
if (n % 2 == 0)
{
s = n / 2;
for (i = s; i < n; i++)
_putchar(str[i]);
}
else
{
s = (n - 1) / 2;
for (j = s + 1; j < n; j++)
_putchar(str[j]);
}
_putchar('\n');
}
