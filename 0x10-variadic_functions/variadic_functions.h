#ifndef _VARIADIC_FUNCRIONS_H_
#define _VARIADIC__FUNCTIONS_H_
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct lol
{
char type;
void (*func)();
} lol;
#endif