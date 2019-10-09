#include "holberton.h"
/**
 * _pow_recursion - pow.
 * @x: integer.
 * @y: number of times we'll multiply x by it's self
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
y--;
return (x * _pow_recursion(x, y));
}
