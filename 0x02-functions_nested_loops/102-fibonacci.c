#include <stdio.h>
/**
 * main - pritn 50 1st fibonacci numbs.
 *
 * Return: always 0.
 */
int main(void)
{
long int i, j, s;
int n;
i = 0;
j = 1;
for (n = 0; n < 50; n++)
if (n != 49)
{
s = i + j;
printf("%ld, ", s);
i = j;
j = s;
}
else
{
s = i + j;
printf("%ld\n", s);
}
return (0);
}
