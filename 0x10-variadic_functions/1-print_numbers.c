#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print arguments
 * @separator: string between numbers.
 * @n: number of args
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d\n", va_arg(list, int));
else
{
if (separator != NULL)
printf("%d%s", va_arg(list, int), separator);
}
}
va_end(list);
}
