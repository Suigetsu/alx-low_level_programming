#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 */

void	jack_bauer(void)
{
	int	min;
	int	hrs;

	min = 0;
	hrs = 0;
	while (hrs < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hrs++;
	}
}
