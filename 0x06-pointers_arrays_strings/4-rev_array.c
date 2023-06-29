#include "main.h"

/**
 * reverse_array - a function that reverses the content of an arr of integers
 * @a: the array
 * @n: size of the array
 */

void	reverse_array(int *a, int n)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	temp = 0;
	len = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;
		i++;
		len--;
	}
}
