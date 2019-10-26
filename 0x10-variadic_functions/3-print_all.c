#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void p_float(void);
void p_char(void);
void p_string(void);
void p_int(void);
/**
 * print_all - print whatever type is the argument
 * @format: format of the next argument.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
va_list arg;
va_start(arg, format);
lol mystruct[] = {
{'c', *p_char},
{'i', *p_int},
{'s', *p_string},
{'f', *p_float},
{0, NULL}
};
int j, i = 0;
char *sep = "";
while (format[i] != '\0' && format != NULL)
{
j = 0;
while (j < 4)
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
if (va_arg(arg, char *) == 0)
{
printf("(nil)");
return;
}
printf("%s", va_arg(arg, char *));
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
