#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the str where we're gonna search
 * @accept: what we're looking for
 * Return: Null if nothing, else what we're looking for till the end
 */

char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
