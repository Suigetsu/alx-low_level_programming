#include "main.h"

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
