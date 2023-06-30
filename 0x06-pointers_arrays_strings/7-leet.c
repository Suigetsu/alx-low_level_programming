#include "main.h"

/**
 * leet - encoding a string into 1337
 * @str: the string we will encode
 * Return: 1h3 s1ring 3nc0d3d
 */

char	*leet(char *str)
{
	char	leet1[] = "oloeaoot";
	char	leet2[] = "OLOEAOOT";
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (leet1[j] && leet2[j])
		{
			if (str[i] == leet1[j] || str[i] == leet2[j])
				str[i] = j + '0';
			j++;
		}
		i++;
	}
	return (str);
}
