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
 * _strcat - a function that concatenates two strings
 * @dest: the destination
 * @src: the one we will concat
 * Return: the destination after the concatentation process
 */

char	*_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = _strlen(dest);
	while (src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
