#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 0; i <= 9; i++)
      {
	for (j = 0; j <= 9; j++)
	  {
	   
	    if (((i * j) / 10) != 0)
	      {
		putchar(((i * j) / 10) + '0');
		putchar(((i * j) % 10) + '0');
	      }
	    else
	      {
		putchar(' ');
		putchar((i * j) + '0');
	      }
	    if (j != 9)
	      {
		putchar(',');
		putchar(' ');
	      }
	  }
	putchar('\n');
      }
return (0);
}
