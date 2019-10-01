#include "holberton.h"
/**
 * atoi - transform char to int.
 * 
 * Return - integer.
 */
int atoi(char *s)
{
int i = 0;
int sign = 1;
int j = 0;
if (s[0] + '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
j = j*10 + j[i] - '0';
return (sign*j);
}
