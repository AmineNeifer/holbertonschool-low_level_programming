#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the sum of  numbers (arguments).
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0, if there's an error returns 1.
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
unsigned int k;
if (argc == 1)
{
printf ("0\n");
return (0);
}
else 
{
for (i = 1; i < argc; i++)
{
for (k = 0; k < strlen(argv[i]); k++)
{
if (argv[i][k] <= '0' || argv[i][k] >= '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
