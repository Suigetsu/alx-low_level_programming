#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @ac: arg count
 * @av: arg vector
 * Return: 0, 1 if there is an error
 */

int	main(int ac, char **av)
{
	if (ac != 3)
		return (printf("Error\n"), 1);
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
