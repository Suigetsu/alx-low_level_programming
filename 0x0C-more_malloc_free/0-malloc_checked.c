#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         If malloc fails, process termination with a status value of 98.
 */

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
