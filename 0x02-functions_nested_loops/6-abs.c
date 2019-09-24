#include "holberton.h"
/**
 * _abs - prints the absolute value of an integer 
 * @r: int type
 * Return: int
 */
int _abs(int r)
{
int r;
if (r < 0)
{
r = (r * -1);
}
_putchar(r);
return (r);
}
