#include "holberton.h"
/**
 * _islower - checks if the charcater is upper case or not
 * int c ;
 * Return: Always 0.
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else if ((c >= 'A') && (c <= 'Z'))
{
return (0);
}
}
