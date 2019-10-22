#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - prints a structure dog
  * @d: Variable.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0 , j = 0;
int n;
dog_t *p = malloc(sizeof(dog_t));
if (p == NULL || *name  == '\0' || *owner == '\0')
return (0);

while (name[i])
i++;
while (owner[j])
j++;
p->name = malloc(i);

if (p->name == NULL)
{
free(p->name);
free(p);
return (0);
}
for (n = 0; n < i; n++)
p->name[n] = name[n];
p->name[n] = '\0';

p->owner = malloc(j);

if (p->owner == NULL)
{
free(p->owner);
free(p);
return (0);
}
for (n = 0; n < j; n++)
p->owner[n] = owner[n];
p->owner[n] = '\0';


p->age = age;

return(p);
}
