#include "function_pointers.h"
#include <stdlib.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL || size != 0 || *action == 0)
    for (i = 0; i < size; i++)
    (*action)(array[i]);
}
