#include "main.h"

/**
 * my_putnbr - my function that prints any number
 * @n: the number I wanna print
 */

void	my_putnbr(int n)
{
	char	s[] = "0123456789";

	if (n >= 0 && n <= 9)
		_putchar(s[n]);
	else if (n > 9)
	{
		my_putnbr(n / 10);
		my_putnbr(n % 10);
	}
}

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: the starting point
 */

void	print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			my_putnbr(n++);
			if (n == 99)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		while (n > 97)
		{
			my_putnbr(n--);
			if (n == 97)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
