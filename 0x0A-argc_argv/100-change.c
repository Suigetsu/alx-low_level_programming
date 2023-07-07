#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */

int	main(int ac, char **av)
{
	int	change;
	int	res;

	res = 0;
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(av[1]);
	while (change > 0)
	{
		if (change % 25 == 0)
			change -= 25;
		else if (change % 10 == 0)
			change -= 10;
		else if (change % 5 == 0)
			change -= 5;
		else if (change % 2 == 0)
			change -= 2;
		else if (change % 1 == 0)
			change -= 1;
		res++;
	}
	printf("%d\n", res);
	return (0);
}
