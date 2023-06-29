#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first str
 * @s2: second str
 * Return: the difference
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1[i])
		return (0);
	while (s1[i] - s2[i] == 0 && (s1[i]))
		i++;
	return (s1[i] - s2[i]);
}
