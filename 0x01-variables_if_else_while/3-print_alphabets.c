#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char kh = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (kh = 'A'; kh <= 'Z'; kh++)
{
putchar(kh);
}
putchar('\n');
return (0);
}
