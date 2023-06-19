#include <stdio.h>

/**
 * main - printing combo4
 * Return: 0
 */

int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = i + 1;
	k = j + 1;
	while (i < j)
	{
		j = i + 1;
		while (j < k)
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					break;
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
