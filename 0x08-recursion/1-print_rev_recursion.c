#include "holberton.h"
/**
 * _print_rev_recursion - reverse a string and then print it
 * @s: to print it's reverse.
 * Return: N/A.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
