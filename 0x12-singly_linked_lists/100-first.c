#include <stdio.h>
void myStartup (void) __attribute__ ((constructor)); 
/**
 * myStartup - function that executes before main.
 */
void myStartup(void) 
{ 
    printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"); 
} 
