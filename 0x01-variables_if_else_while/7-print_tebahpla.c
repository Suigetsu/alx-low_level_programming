#include <stdio.h>

/**
 * main - printing alpha in reverse
 * Return: 0
 */

int	main(void)
{
	int	i;

	i = 122;
	while (i > 96)
		putchar(i--);
	putchar('\n');
	return (0);
}
