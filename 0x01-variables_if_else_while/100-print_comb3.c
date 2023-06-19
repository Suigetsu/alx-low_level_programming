#include <stdio.h>

/**
 * main - printing combos of numbers
 * Return: 0
 */

int	main(void)
{
	int	i;
	int	j;

	i = 48;
	j = i + 1;
	while (i < j)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == '8')
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
