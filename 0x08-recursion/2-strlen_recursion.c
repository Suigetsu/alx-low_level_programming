#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

int	_strlen_recursion(char *s)
{
	int	i;

	if (!s[i])
		return(0);
	return (_strlen_recursion(s[i++]) + 1);
}
