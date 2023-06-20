#include "main.h"

/**
 * main - a program that prints _putchar
 * Return: 0
 */

int	main(void)
{
	int	i;
	char	s[] = "_putchar\n";

	i = 0;
	while (s[i])
		_putchar(s[i++]);
	return (0);
}
