#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 *         The contents are copied to the newly allocated space,
 *         in the range from the start of ptr up to the minimum of the
 *         old and new sizes.
 *         If new_size > old_size, the "added" memory is not initialized.
 *         If new_size == old_size, return ptr.
 *         If ptr is NULL, the call is equivalent to malloc(new_size)
 *         for all values of old_size and new_size.
 *         If new_size is equal to zero, and ptr is not NULL,
 *         the call is equivalent to free(ptr). Return NULL.
 */
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void	*new_ptr;
	int		i;

	i = 0;
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}
	while ((unsigned int)i < new_size)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (new_ptr);
}
