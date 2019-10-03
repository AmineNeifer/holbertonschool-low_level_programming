#include "holberton.h"
/**
 * *leet - coding.
 * @c: string.
 * Return: c.
 */
char *leet(char *c)
{
char d[] = "aeotl";
char u[] = "AEOTL";
char i[] = "43071";
int q = 0;
int j = 0;
for (j = 0; c[j]; j++)
{
for (q = 0; q < 6; q++)
if (c[j] == u[q] || c[j] == d[q])
c[j] = i[q];
}
return (c);
}
