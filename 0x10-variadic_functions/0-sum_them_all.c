#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculating the sum of ints
 * @n: numb of args.
 * Return: the sum of int arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list lis;
int sum;
unsigned int i;
sum = 0;
va_start(lis, n);
for (i = 0; i < n; i++)
sum += va_arg(lis, unsigned int);
va_end(lis);
return (sum);
}
