#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where to copy
 * @src: to copy from
 * @n: nbr of bytes we will copy
 * Return: dest after copying
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
