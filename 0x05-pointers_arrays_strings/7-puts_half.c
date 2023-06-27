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
 * puts_half - prints half of a str followed by a new line
 * @str: the str we're gonna print
 */

void	puts_half(char *str)
{
	int	i;

	if (_strlen(str) % 2 == 0)
		i = _strlen(str) / 2;
	else
		i = (_strlen(str) + 1) / 2;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
