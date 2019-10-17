#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    int *p;
    unsigned int i;
    char *old = ptr;
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (0);
    }
    p = malloc(new_size);
    if (p == NULL)
    return (0);
    if (new_size == old_size)
    return (ptr);
    else if (new_size < old_size)
    free (p);
    for (i = 0; i < old_size; i++)
    p[i] = old[i];
    return (p);

}
