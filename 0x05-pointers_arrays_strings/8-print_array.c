#include "main.h"

/**
 * print_array - printing an array of ints
 * @a: the array
 * @n: number of elements to print
 */

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i == n)
			break;
		printf(", ");
	}
	printf("\n");
}
