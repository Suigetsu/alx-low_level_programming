#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
*/
int main () {
   int len = _strspn("i am","xyz");
   printf("Length of initial segment matching : %d\n", len );
   return(0);
}
