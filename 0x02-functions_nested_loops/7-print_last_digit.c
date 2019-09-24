#include "holberton.h"
/**
 * print_last_digit: prints the last digit of a number.
 * @n: int type.
 * Return: int.
 */
int print_last_digit(int n)
{
if (n > 9)
{
return (n % 10);
}
else
return (n);
}
