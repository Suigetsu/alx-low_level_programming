#include <stdio.h>

/**
 * main - printall the letters except q and e
 * Return: 0
 */

int	main(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
