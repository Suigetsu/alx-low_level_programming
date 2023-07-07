#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: the character that we will check
 * Return: 1 if true, 0 if not
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
