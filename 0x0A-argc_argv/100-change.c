#include <stdio.h>
#include <stdlib.h>
int coin_counter(int a);
/**
 * main - print number of coins.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 1 if there is an error otherwise 0.
 */
int main(int argc, char *argv[])
{
int a, c;
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
if (a == 0)
{
printf("0\n");
return (0);
}
c = coin_counter(a);
printf("%d\n", c);
return (0);
}
/**
 * coin_counter - count the number of coins.
 * @a: cents.
 * Return: number of coins.
 */
int coin_counter(int a)
{
int c = 0;
while (a > 0)
{
if (a >= 25)
{
c = c + a / 25;
a %= 25;
}
else if (a >= 10)
{
c += a / 10;
a %= 10;
}
else if (a >= 5)
{
c += a / 5;
a %= 5;
}
else if (a >= 2)
{
c += a / 2;
a %= 2;
}
else if (a == 1)
{
c++;
a %= 1;
}
}
return (c);
}
