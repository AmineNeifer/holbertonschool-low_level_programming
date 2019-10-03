#include "holberton.h"
/**
 * *_strcat - concatinating strings.
 * @dest: string.
 * @src: string.
 * Return: resulting dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int k;
int n = 0;
while (dest[i] != '\0')
i++;
while (src[n] != '\0')
n++;
for (k = 0; k <= n ; k++)
{
if (k == n)
dest[i + n] = '\0';
else
dest[i + k] = src[k];
}
return (dest);
}
