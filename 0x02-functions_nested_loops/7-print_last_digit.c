#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number we will print
 * Return: the number we printed
 */

int	print_last_digit(int n)
{
	int 			to_print;
	long int		helper;

	helper = n;
	to_print = 0;
	if (n < 0)
		helper *= -1;
	helper %= 10;
	to_print = helper + '0';
	return (_putchar(to_print), helper);
}
