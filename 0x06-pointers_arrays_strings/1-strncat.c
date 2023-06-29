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
 * _strncat - a function that concatenates two strings depends on n
 * @dest: the destination
 * @src: the source
 * @n: number of bytes we will concat
 * Return: the destination
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	len;
	int	i;

	len = _strlen(dest);
	i = 0;
	while (i < n && src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
