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
char *str;
va_start(list, n);
for (i = 0; i < n; i++)
{

str = va_arg(list, char *);
printf("%s", (str) ? str : "(nil)");

if (i < n - 1 && separator)
printf("%s", separator);

}
printf("\n");
va_end(list);
}
