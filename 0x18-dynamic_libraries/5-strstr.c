#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int checking(char *haystack, char *needle, int i, int len);
/**
 * _strstr - search for a subsrting in a string.
 * @haystack: string.
 * @needle: substring.
 * Return: a pointe to the first char if succeed or NULL if fails.
 */
char *_strstr(char *haystack, char *needle)
{
int len = 0, len1 = 0, i;
while (haystack[len])
len++;
while (needle[len1])
len1++;
for (i = 0; i < len; i++)
{
if (checking(haystack, needle, i, len1) == 0)
return (haystack + i);
}
return (NULL);
}
/**
 * checking - check for the substring.
 * @haystack: string.
 * @needle: substring.
 * @i: int.
 * @len: int.
 * Return: 1 if fails and 0 if succeed
 */
int checking(char *haystack, char *needle, int i, int len)
{
int c = 0;
while (haystack[i + c] && c < len)
{
if (needle[c] != haystack[c + i])
return (1);
c++;
}
return (0);
}
