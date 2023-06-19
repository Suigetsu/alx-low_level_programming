#include <unistd.h>

/**
 * main - a program that prints all single digit numbers of base 10
 * Return: 0
 */

int	main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}
