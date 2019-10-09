#include "holberton.h"
int prime_lol(int i, int j);
/**
 * is_prime_number - checks for a prime numb.
 * @n: number we checking.
 * Return: 1 if n is prime otherwise 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_lol(n, n - 1));
}
/**
 * prime_lol - helper to check if n is prime.
 * @i: will take n.
 * @j: wille take n - 1.
 * Return: 1 if n is prime othwise 0.
 */
int prime_lol(int i, int j)
{
if (j == 1)
return (1);
if (i % j == 0)
return (0);
return (prime_lol(i, j - 1));
}
