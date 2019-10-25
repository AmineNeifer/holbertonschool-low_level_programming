#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print arguments
 * @separator: string between args.
 * @n: number of args
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%s\n", va_arg(list, char *));
else if (separator != NULL)
printf("%s%s", va_arg(list, char *), separator);
else if (va_arg(list, char *) == NULL)
printf("(nil)");
}
va_end(list);
}
