#include "holberton.h"
int length(char *s);
int palindrome_lol(char *s, int n, int i);
/**
 * is_palindrome - checks whether the word is palindrome or not.
 * @s: string.
 * Return: 1 if palindrome , 0 if not.
 */
int is_palindrome(char *s)
{
int i, n;
n = 0;
i = length(s);
if (s[1] == '\0')
return (1);
if (s[n] == s[i])
return (palindrome_lol(s, n + 1, i - 1));
else
return (0);
}
/**
 * palindrome_lol - complementary to the is_palindrome fn.
 * @s: string.
 * @n: counter.
 * @i: rev_counter.
 * Return: 1 or 0.
 */
int palindrome_lol(char *s, int n, int i)
{
if (n == i || i - 1 == 1)
return (1);
if (s[n] == s[i])
return (palindrome_lol(s, n + 1, i - 1));
return (0);
}
/**
 * length - returns the length of a string.
 * @s: string.
 * Return: value of strlen(*string*)
 */
int length(char *s)
{
int i = 0;
while (s[i])
i++;
i--;
return (i);
}
