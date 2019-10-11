#include "holberton.h"
/**
 * _islower - checks if the charcater is upper case or not
 * @c: is char type
 * Return: 1 if c is lower otherwise 0.
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else
return (0);
}
