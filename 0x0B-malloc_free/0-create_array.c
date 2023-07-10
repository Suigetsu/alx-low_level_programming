#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if it fails or if size is 0.
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char			*array;

	i = 0;
	array = NULL;
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
		array[i++] = c;
	return (array);
}
