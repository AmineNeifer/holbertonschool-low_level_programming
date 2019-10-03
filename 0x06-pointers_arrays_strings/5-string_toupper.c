#include "holberton.h"
/**
 * *string_toupper - make all letters uppercase.
 * @a: string.
 * Return: all uppercase string.
 */
char *string_toupper(char *a)
{
int i = 0;
int j;
while (a[i] != '\0')
i++;
for (j = 0; j < i; j++)
if (a[j] >= 'a' && a[j] <= 'z')
a[j] -= 32;
return (a);
}
