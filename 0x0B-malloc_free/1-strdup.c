#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *_strdup - Copying a string.
  * @str: String to copy.
  * Return: pointer.
  */

char *_strdup(char *str)
{
int i = 0, j;
char *p;
if (str == NULL)
return (0);
while (str[i])
i++;
i += 1;
p = malloc(i *sizeof(char));
if (p == NULL)
return (0);
for (j = 0; j < i; j++)
p[j] = str[j];
p[i] = '\0';
return (p);
}
}
