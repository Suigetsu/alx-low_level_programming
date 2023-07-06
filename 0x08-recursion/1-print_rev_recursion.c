#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string
 * Return: the length
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 */

void	_print_rev_recursion(char *s)
{
	static int	i;

	if (i == 0 && _strlen(s) > 1)
		i = _strlen(s) - 1;
	if (i < 0)
		return;
	_putchar(s[i--]);
	if (i == 0)
		_putchar(s[i--]);
	_print_rev_recursion(s);
}
