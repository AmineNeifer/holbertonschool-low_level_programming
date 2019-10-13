#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of coins.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 
 */
int main(int argc, char *argv[])
{
int a, c;
c = 0;
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
printf("%d\n", c);
return (0);
}
