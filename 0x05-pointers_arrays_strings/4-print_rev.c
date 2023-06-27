#include "main.h"

/**
 * _strlen - counting the len of the str
 * @s: the str
 * Return: the len
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i]);
		i++;
	return (i);
}

/**
 * print_rev - printing a string in reverse
 * @s: the str
 */

void	print_rev(char *s)
{
	int	i;

	i = _strlen(s);
	while (i--);
		putchar(s[i]);
	putchar('\n');
}
