#include "function_pointers.h"
/**
 * print_name - takes a name and prints it.
 * @name: string.
 * @f: pointer to a function.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
