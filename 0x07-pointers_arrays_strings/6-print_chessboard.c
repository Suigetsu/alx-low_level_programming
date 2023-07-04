#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: a 2D array that holds the chessboard as a value
 */

void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
