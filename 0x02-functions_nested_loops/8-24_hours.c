#include "holberton.h"
/**
 * jack_bauer - prints time from 00::00 to 23:59.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int n, c;
for (n = 0; n <= 23; n++)
for (c = 0; c <= 59; c++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(':');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar('\n');
}
}
