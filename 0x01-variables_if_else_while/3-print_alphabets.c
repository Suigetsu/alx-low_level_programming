#include <stdio.h>

/**
 * main - printing alphabets in lowercase, then in uppercase
 * Return: 0if it's successful
 */

int	main(void)
{
	int	i;

	i = 97;
	while (i < 123 && i != 91)
	{
		putchar(i++);
		if (i == 123)
			i = 65;
	}
	putchar('\n');
	return (0);
}
