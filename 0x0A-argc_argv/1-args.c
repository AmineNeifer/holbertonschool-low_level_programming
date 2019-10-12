#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void) argv;
argc--;
printf("%d\n", argc);
return (0);
}
