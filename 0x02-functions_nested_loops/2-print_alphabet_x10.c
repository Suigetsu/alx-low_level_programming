#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets 10 times, in lowercase
 */

void	print_alphabet_x10(void)
{
	char	s[] = "abcdefghijklmnopqrstuvwxyz\n";
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (s[j])
			_putchar(s[j++]);
		i++;
	}
}
