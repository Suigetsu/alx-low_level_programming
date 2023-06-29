#include "main.h"

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
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: all uppercase string
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (_islower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
