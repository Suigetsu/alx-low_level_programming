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
 * rev_string - reverse a string
 * @s: the str
 */

void	rev_string(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = _strlen(s) - 1;
	while (i < _strlen(s) / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
