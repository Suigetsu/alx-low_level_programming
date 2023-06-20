#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 */

void	print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
		_putchar(i++);
	_putchar('\n');
}
