#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: main str
 * @accept: substr
 * Return: number of bytes
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	if (!s || !accept)
		return (0);
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}

