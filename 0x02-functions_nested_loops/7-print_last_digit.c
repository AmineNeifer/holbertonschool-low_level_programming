#include "holberton.h"
/**
 * print_last_digit: prints the last digit of a number
 * @n: int type
 * Return: always 0.
 */
int print_last_digit(int n);
{
n %= 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
