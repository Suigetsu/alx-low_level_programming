#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the string we will fill
 * @b: what we will use
 * @n: number of bytes we will fill
 * Return: the filled string
 */

int	*_memset(int *s, int b, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the 2-dimensional array of integers, or NULL
 * if memory allocation fails or if width or height is 0 or negative.
 */

int	**alloc_grid(int width, int height)
{
	int	**arr;
	int	i;

	i = 0;
	if (!width || !height)
		return (NULL);
	arr = malloc((sizeof(int *) * width));
	while (i < width)
	{
		arr[i] = malloc(sizeof(int) * height);
		_memset(arr[i++], 0, height);
	}
	return (arr);
}
