#include "holberton.h"
/**
 * *rot13 - rot13 coding.
 * @ch: string.
 * Return: ch.
 */
char *rot13(char *ch)
{
int i, j;
char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; ch[i] != '\0'; i++)
for (j = 0; j < 53; j++)
if (ch[i] == a1[j])
{
ch[i] = a2[j];
break;
}
return (ch);
}
