#include "holberton.h"
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x[9] = "Holberton";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(x[i]);
}
_putchar('\n');
return (0);
}
