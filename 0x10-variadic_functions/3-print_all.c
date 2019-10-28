#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print whatever type is the argument
 * @format: format of the next argument.
 * @...: list of args.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
    lol mystruct[] = {
{'c', *p_char},
{'i', *p_int},
{'s', *p_string},
{'f', *p_float},
{0, NULL}
};
va_list arg;
int j, i = 0;
char *sep = "";
va_start(arg, format);

while (format && format[i])
{
j = 0;
while (j < 5)
{
if (format[i] == mystruct[j].type)
{
printf("%s", sep);
mystruct[j].func(arg);
sep = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(arg);
}
/**
 * p_char - print char.
 * @arg: argument.
 * Return: void
 */
void p_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
 * p_string - print string.
 * @arg: argument.
 * Return: void
 */
void p_string(va_list arg)
{
char *str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * p_float - print float.
 * @arg: argument.
 * Return: void
 */
void p_float(va_list arg)
{

printf("%f", va_arg(arg, double));
}
/**
 * p_int - print int.
 * @arg: argument.
 * Return: void
 */
void p_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
