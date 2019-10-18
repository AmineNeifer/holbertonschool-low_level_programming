#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
char *argstostr(int ac, char **av)
{
int i, a = 0, k = 0;
unsigned int j;
char *p;
if (ac == 0 || av == 0)
return (0);
for (i = 0; i < ac; i++)
{
a += strlen(av[i]);
}
p = malloc(a);
if (p == NULL)
return (0);
for (i = 0; i < ac; i++)
{
for (j = 0; j < (strlen(av[i])); j++)
{
p[k] = av[i][j];
k++;
}
p[k] = '\n';
k++;
}
return (p);
}
