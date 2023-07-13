#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array.
 *         The array contains all values from min (included) to max (included),
 *         ordered from min to max.
 *         If min > max, return NULL.
 *         If malloc fails, return NULL.
 */

int	*array_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < max - min + 1)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
