#include <stdio.h>
/**
 * main - pritn 50 1st fibonacci numbs.
 *
 * Return: always 0.
 */
int main(void)
{
long int d, i, j, s;
int n;
i = 0;
j = 1;
d = 0;
for (n = 0; n < 32; n++)
{
s = i + j;
if ((s % 2) == 0)
d = d + s;
i = j;
j = s;
}
printf("%ld\n", d);
return (0);
}
