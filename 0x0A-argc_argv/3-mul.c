#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two numberts (arguments).
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0, if there's an error returns 1.
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
