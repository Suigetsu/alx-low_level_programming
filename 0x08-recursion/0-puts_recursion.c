#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 */

void	_puts_recursion(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}
