#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first str
 * @s2: second str
 * Return: the difference
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1[i])
		return (0);
	while (s1[i] - s2[i] == 0 && (s1[i]))
		i++;
	return (s1[i] - s2[i]);
}

/**
 * wordcount - to count how many words in a string
 * @str: string we will count words from
 * Return: nbr of words
 */

int	wordcount(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			res++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			i++;
	}
	return (res);
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
 * free_arr - Frees a 2-dimensional grid previously created by alloc_grid.
 * @arr: Pointer to the 2-dimensional grid.
 * @size: The height of the grid.
 */

void	free_arr(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(arr[i]);
	free(arr);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL if str is NULL,
 * str is an empty string, or memory allocation fails.
 * Each element of the array contains a single word, null-terminated.
 * The last element of the array is NULL.
 * Words are separated by spaces.
 */

char	**strtow(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;
	int		start;

	i = 0;
	j = 0;
	k = 0;
	start = 0;
	if (!str || !_strcmp(str, "") || !wordcount(str))
		return (NULL);
	arr = malloc((wordcount(str) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!str[i])
			break;
		start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			i++;
			j++;
		}
		arr[k] = malloc(j * sizeof(char));
		if (!arr[k])
			return (free_arr(arr, k), NULL);
		_strncpy(arr[k++], &str[start], j);
	}
	arr[k] = NULL;
	return (arr);
}
