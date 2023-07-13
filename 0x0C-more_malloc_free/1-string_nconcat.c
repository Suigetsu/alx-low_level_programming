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
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated space in memory, containing s1
 *         followed by the first n bytes of s2 and null-terminated.
 *         If the function fails, return NULL.
 *         If n is greater or equal to the length of s2, use the entire s2.
 *         If NULL is passed, treat it as an empty string.
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*dest;
	int		len1;
	int		len2;
	int		to_allocat;

	dest = NULL;
	len1 = 0;
	len2 = 0;
	to_allocat = 0;
	if (s1)
		len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);
	if (n >= (unsigned int)len2)
		to_allocat = len1 + len2;
	else
		to_allocat = len1 + n;
	dest = malloc((to_allocat + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (s1)
		_strncpy(dest, s1, len1);
	if (s2)
		_strncpy(&dest[len1], s2, to_allocat - len1);
	return (dest);
}
