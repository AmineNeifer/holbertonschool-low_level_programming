#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int z;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
for (z = '0'; z <= '9'; z++)
{
putchar(z);
if ((n != '9') & (z != '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
return (0);
}
