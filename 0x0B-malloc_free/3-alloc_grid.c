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
 * free_arr - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the 2-dimensional grid.
 * @height: The height of the grid.
 */

void	free_arr(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
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
