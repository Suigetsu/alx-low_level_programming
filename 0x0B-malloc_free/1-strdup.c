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
 * _strncpy - a function that copies a string
 * @dest: where to copy
 * @src: to copy from
 * @n: nbr of bytes we will copy
 * Return: the string we copied
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */

char	*_strdup(char *str)
{
	char	*dup;

	dup = NULL;
	if (!str)
		return (NULL);
	dup = malloc((sizeof(char) * _strlen(str)) + 1);
	if (!dup)
		return (NULL);
	dup = _strncpy(dup, str, _strlen(str));
	return (dup);
}
