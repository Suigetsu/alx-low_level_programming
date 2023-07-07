#include <stdio.h>

/**
 * main - a program that prints all arguments it receives one argument per line
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
		printf("%s\n", av[i++]);
	return (0);
}
