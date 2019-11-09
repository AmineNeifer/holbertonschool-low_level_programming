#include "holberton.h"
#include <stdio.h>
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
i = _strlen_recursion(s) - 1;
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
if (s[n] != s[i])
return (0);
if (n == i || i - n == 1)
return (1);
if (s[n] == s[i])
return (palindrome_lol(s, n + 1, i - 1));
return (0);
}
/**
 * _strlen_recursion - finding the length of a string.
 * @s: string to find it's length
 * Return: length.
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
return (i + _strlen_recursion(s + 1));
}
else
return (0);
}
