#include <stdio.h>

/**
 * main - printing hexa
 * Return: 0
 */

int	main(void)
{
	char	s[17] = "0123456789abcdef\n";
	int		i;

	i = 0;
	while (i < 17)
		putchar(s[i++]);
	return (0);
}
