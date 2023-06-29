#include "main.h"

/**
 * _separators - a function that checks for separators
 * @c: the char we will check
 * Return: 1 if true, 0 if not
 */

int	_separators(char c)
{
	if (c == ',' || c == ';' || c == '.' || c == '.' || c == '!' || c == '"' ||
	c == '(' || c == ')' || c == '{' || c == '}' || c == ' ' || c == '\t' ||
	c == '\n')
		return (1);
	return (0);
}

/**
 * _islower - a function that checks for lowercase character
 * @c: the character that we will check
 * Return: 1 if true, 0 if not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string we will cap
 * Return: the string capitalized
 */

char	*cap_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (_separators(str[i]) && str[i])
			i++;
		if (_islower(str[i]))
			str[i] -= 32;
		while (!(_separators(str[i])) && str[i])
			i++;
	}
	return (str);
}
