#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: where to look
 * @needle: the substr we're trying to locate
 * Return: the substr, NULL otherwise
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	new_i;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			new_i = i;
			while (needle[j])
			{
				if (haystack[new_i] != needle[i] && needle[i])
					break;
				if (needle[j])
					return(needle);
				new_i++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
