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
 * free_arr - a function that frees a 2d array
 * @arr: the 2d array that we wil free
 * @size: the size
 */

void	free_arr(int **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(arr[i++]);
	free(arr);
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
	arr = malloc((sizeof(int *) * height));
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
		{
			free_arr(arr, i);
			return (NULL);
		}
		_memset(arr[i++], 0, width);
	}
	return (arr);
}
