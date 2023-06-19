#include <stdio.h>

/**
 * main - printing combos
 * Return: 0
 */

int	main(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		putchar(i++);
		if (i == 58)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
