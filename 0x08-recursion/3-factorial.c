#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n.
 *         -1 if n is negative (error condition).
 *         1 if n is 0.
 */

int	factorial(int n)
{
	int	res;

	res = 0;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
