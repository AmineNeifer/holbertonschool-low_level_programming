#include "holberton.h"
/**
 * rev_string - prints a string
 * @s: character
 * Return: void
 */
void rev_string(char *s)
{
int i, j;
char c;
i = 0;
while (s[i] != '\0')
i++;
i--;
for (j = 0; j <= i / 2; j++)
{
c = s[j];
s[j] = s[i - j];
s[i - j] = c;
}
}
