#include <stdio.h>

/**
 * main - printing digits without using char variables
 * Return: 0
 */

int	main(void)
{
	int	i;

	i = 48;
	while (i < 58)
		putchar(i++);
	putchar('\n');
	return (0);
}
