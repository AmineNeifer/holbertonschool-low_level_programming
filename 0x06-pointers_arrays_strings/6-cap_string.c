#include "holberton.h"
/**
 * *cap_string - capitalising word.
 * @c: string.
 * Return: c.
 */
char *cap_string(char *c)
{
int i = 0;
int j = 0;
while (c[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
if (c[j] >= 'a' && c[j] <= 'z')
{
if (c[j - 1] == ',' || c[j - 1] == ' ' || c[j - 1] == '.' || c[j - 1] == '!')
c[j] -= 32;
else if (c[j - 1] == '?' || c[j - 1] == '"' || c[j - 1] == '(' || c[j - 1] == ')')
c[j] -= 32;
else if (c[j - 1] == '{' || c[j - 1] == '}' || c[j - 1] == '\n' || c[j - 1] == '\t')
c[j] -= 32;
}
}
return (c);
}
