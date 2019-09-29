#include <stdio.h>
/**
 * main - print the sum of mul of 3 and 5
 *
 * Return: none.
 */
int main(void)
{
int i, s;
s = 0;
for (i = 1; i < 1024; i++)
if ((i % 3 == 0) || (i % 5 == 0))
s = s + i;
printf("%d\n", s);
return (0);
}
