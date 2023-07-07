#include <unistd.h>
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */

int	main(int ac, char **av)
{
	(void)ac;

	printf("%s\n", av[0]);
	return (0);
}
