#include "holberton.h"
/**
 * _abs - prints the absolute value of an integer 
 * 
 * Return: int
 */
int _abs(int r)
{
int r;
if (r < 0)
{
r = -r;
}
_putchar(r);
return (r);
}
