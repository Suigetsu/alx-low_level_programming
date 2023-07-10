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
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated space in memory,
 * containing the concatenated string, or NULL if memory allocation fails.
 * If s1 or s2 is NULL, treat it as an empty string.
 */

char    *str_concat(char *s1, char *s2)
{
	char	*dest;
	int		len1;
	int		len2;

	dest = NULL;
	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (s1)
		_strncpy(dest, s1, len1);
	if (s2)
		_strncpy(&dest[len1], s2, _strlen(s2));
	return (dest);
}

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: Pointer to the new string containing the concatenated arguments,
 * or NULL if ac is 0, av is NULL, or memory allocation fails.
 * Each argument is followed by a newline character in the new string.
 */

char	*argstostr(int ac, char **av)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	str = NULL;
	size = 0;
	if (!ac || !av)
		return (NULL);
	while (i < ac)
	{
		str = str_concat(str, av[i++]);
		str = str_concat(str, "\n");
	}
	return (str);
}
