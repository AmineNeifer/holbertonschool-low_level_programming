#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = '0';
char k = 'a';
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (k = 'a'; k <= 'f'; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
