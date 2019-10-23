#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calc.h"
/**
 * main - calculating.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (strlen(argv[2]) > 1 || get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
if ((strcmp(argv[1], "0") == 0 || strcmp(argv[3], "0") == 0) && (strcmp(argv[2], "*") == 0 || strcmp(argv[2], "%") == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
return (0);
}
