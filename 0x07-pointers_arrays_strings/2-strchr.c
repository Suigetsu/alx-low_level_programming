#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the str
 * @c: the character we wanna locate
 * Return: the str from the  char we were trying to locate if true, else NULL
 */

char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
