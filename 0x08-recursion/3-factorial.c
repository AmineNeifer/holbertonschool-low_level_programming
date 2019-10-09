#include "holberton.h"
/**
 * factorial - function that calculates the factorial of an int.
 * @n: integer.
 * Return: the value of n!
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
