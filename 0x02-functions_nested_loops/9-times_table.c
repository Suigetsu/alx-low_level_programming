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
 * times_table - a function that prints the 9 times table, starting with 0
 */

void	times_table(void)
{
	int	i;
	int	times;
	int	res;

	i = 0;
	times = 0;
	while (i < 10)
	{
		times = 0;
		while (times < 10)
		{
			res = times * i;
			my_putnbr(res);
			times++;
			if (times == 10)
				break;
			_putchar(',');
			_putchar(' ');
			if (res < 10)
				_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
