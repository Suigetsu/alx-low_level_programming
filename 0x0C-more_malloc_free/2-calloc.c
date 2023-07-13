#include "main.h"

/**
 * _bzero - Sets the first 'n' bytes of the memory area pointed to by 's'
 *            to zero.
 * @s: Pointer to the memory area.
 * @n: Number of bytes to be set to zero.
 */

void	_bzero(void *s, size_t n)
{
	while (n--)
	{
		*((char *)s + n) = '\0';
	}
}

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory.
 *         The memory is set to zero.
 *         If nmemb or size is 0, return NULL.
 *         If malloc fails, return NULL.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	_bzero(ptr, nmemb * size);
	return (ptr);
}
