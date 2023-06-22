#include "main.h"

/**
 * _isdigit - a function that checks for a digit 
 * @c: the character we're gonna check
 * Return: 0 if not true, 1 otherwise
 */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
