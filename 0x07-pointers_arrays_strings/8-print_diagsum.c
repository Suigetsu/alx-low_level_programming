#include "main.h"

/**
 * print_diagsums - prints the sum of the two diag of a square matrix of int
 * @a: the diagonal
 * @size: size of diagonal
 */

void	print_diagsums(int *a, int size)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += a[i * size + i];
		i++;
	}
	printf("%d, ", result);
	result = 0;
	while (i >= 0)
	{
		result += a[i * size - i];
		i--;
	}
	printf("%d\n", result);
}
