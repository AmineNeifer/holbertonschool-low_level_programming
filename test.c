#include <stdio.h>
int main(void)
{
  int i, j, n;
  n = 12;
    if (n < 15 && n > 0)
      {
    for (i = 0; i <= n; i++)
      {
	for (j = 0; j <= n; j++)
	  {
	   if (j == 0)
	      putchar ('0');
	   else if (((i * j) / 100) != 0)
	      {
		putchar((i * j / 100) + '0');
		putchar(((i * j / 10) % 10) + '0');
		putchar(((i * j) % 10) + '0');
	      }
	   else if (((i * j) / 10) != 0)
	     {
	       putchar(' ');
	       putchar(((i * j) / 10) + '0');
	       putchar(((i *j) % 10) + '0');
	     }
	    else
	      {
		putchar(' ');
		putchar(' ');
		putchar((i * j) + '0');
	      }
	    if (j != n)
	      {
		putchar(',');
		putchar(' ');
	      }
	  }
	putchar('\n');
      }
      }
return (0);
}
