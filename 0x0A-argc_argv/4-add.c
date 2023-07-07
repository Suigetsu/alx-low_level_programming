#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @ac: arg count
 * @av: arg vector
 * Return: 0, 1 if there's an error
 */

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	sum;

	i = 1;
	j = 0;
	sum = 0;
	if (ac == 1)
		return (printf("0\n"), 0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (!isdigit(av[i][j]))
				return (printf("Error\n"), 1);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
		sum += atoi(av[i++]);
	printf("%d\n", sum);
	return (0);
}
