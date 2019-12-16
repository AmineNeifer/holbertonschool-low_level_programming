#include "holberton.h"
/**
 * _atoi - transform char to int.
 * @s: array to convert
 * Return: integer.
 */
int _atoi(char *s)
{
	int found = 0;
	unsigned int num = 0;
	int n = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (!found)
				found = 1;
			num = num * 10 + (*s - '0');
		}
		else if (found)
			break;
		s++;
	}
	return (num * n);
}
