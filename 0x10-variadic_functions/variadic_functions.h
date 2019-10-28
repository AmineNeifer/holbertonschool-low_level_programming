#ifndef _VARIADIC_FUNCRIONS_H_
#define _VARIADIC__FUNCTIONS_H_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * lol - structure.
 * @type: character that shows what type is the next arg gon be.
 * @func: what function to use.
 * Description - doesn't need any.
 */
typedef struct lol
{
char type;
void (*func)();
} lol;
void p_float(va_list);
void p_char(va_list);
void p_string(va_list);
void p_int(va_list);
#endif
