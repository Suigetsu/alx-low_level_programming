#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: the character that we will check
 * Return: 1 if true, 0 if not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
