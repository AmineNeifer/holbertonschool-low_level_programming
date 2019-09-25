#include "holberton.h"

/**
 * times_table - pritns the 9 times table.
 *
 * Return: Always 0.
 */
void times_table(int n)
{
int i, j;
if (n < 15 && n > 0)
{
for (i = 0; i <= n; i++)
}
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar ('0');
else if (((i * j) / 100) != 0)
{
_putchar((i * j / 100) + '0');
_putchar(((i * j / 10) % 10) + '0');
_putchar(((i * j) % 10) + '0');
}
else if (((i * j) / 10) != 0)
{
_putchar(' ');
_putchar(((i * j) / 10) + '0');
_putchar(((i *j) % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar((i * j) + '0');
}
if (j != n)
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
