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

	i = 0;
	if (!needle)
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
