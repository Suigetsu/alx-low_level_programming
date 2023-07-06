#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 */

void	_print_rev_recursion(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return;
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);
}
