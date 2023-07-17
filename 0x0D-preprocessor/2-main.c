#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description: This program prints the name of the file it was compiled from,
 * followed by a new line. It uses the standard library to achieve this.
 *
 * Return: Always 0 (Success)
 */

int	main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
