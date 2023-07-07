#include "main.h"

/**
 * _strcpy - own implementation of libc strcpy
 * @dest: where we're gonna copy
 * @src: what we will copy
 * Return: dest
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
