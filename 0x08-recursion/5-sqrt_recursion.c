#include "holberton.h"
int _sqrt_lol(int i, int j);
/**
 *  _sqrt_recursion - same as sqrt funct
 * @n: integer which's sqrt we looking for
 * Return: value of sqrt(n).
 */
int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
return (n);
else if (n < 0)
return (-1);
else
return (_sqrt_lol(n, n - 1));
}
/**
 * _sqrt_lol - function helping to find sqrt (n)
 * @i: will take n.
 * @j: will take n - 1.
 * Return: sqrt(n).
 */
int _sqrt_lol(int i, int j)
{
if (j < 1)
return (-1);
if (j * j == i)
return (j);
else
return (_sqrt_lol(i, j - 1));
}
