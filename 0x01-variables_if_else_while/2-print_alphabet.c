#include <stdio.h>

/**
 * main - printing alphabets in lowercase
 * Return: 0
 */

int	main(void)
{
	int	i;

	i = 97;
	while (i < 123)
		putchar(i++);
	putchar('\n');
	return (0);
}
