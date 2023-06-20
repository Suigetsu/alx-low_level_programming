#include "main.c"

/**
 * print_alphabet_x10 - printing alphabets 10 times in lowercase
 */

void	print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
