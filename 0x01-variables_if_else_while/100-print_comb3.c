#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, z;
for (n = '0'; n <= '9'; n++)
for (z = '0'; z <= '9'; z++)
{
if (n < z)
{
putchar(n);
putchar(z);
if (n != '8' || z != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
