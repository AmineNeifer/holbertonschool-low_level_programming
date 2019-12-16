#include "holberton.h"
/**
 * *_strncat - concatinating strings.
 * @dest: string.
 * @src: string.
 * @n: integer.
 * Return: resulting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int k;
while (dest[i] != '\0')
i++;
for (k = 0; k < n && src[k] != '\0'; k++)
dest[i + k] = src[k];
dest[i + k] = '\0';
return (dest);
}
