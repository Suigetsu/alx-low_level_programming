#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the character we're gonna check
 * Return: 1 if c is uppercase, 0 if not
 */

int	_isupper(int c)
{
	if (c >= 'A' && c < 'Z')
		return (1);
	return (0);
}
