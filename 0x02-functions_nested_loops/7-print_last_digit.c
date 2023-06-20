#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number we will print
 * Return: the number we printed
 */

int	print_last_digit(int n)
{
	int to_print;

	to_print = 0;
	if (n < 0)
		n *= -1;
	n %= 10;
	to_print = n + '0';
	return (_putchar(to_print), n);
}
