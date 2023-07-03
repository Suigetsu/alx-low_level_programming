#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the string we will fill
 * @b: what we will use
 * @n: number of bytes we will fill
 * Return: the filled string
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
