#include "main.h"

/**
 * _putchar - a function that prints any character passed in the parameters
 * @c: the character that we will print
 * Return: 1
 */

int	_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
