#include <unistd.h>

/**
 * main - printing the rest of the quote on the standarts output.
 * Return: returning 1 this time, cause we're printing on the stderr.
 */

int	main(void)
{
	write (2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
