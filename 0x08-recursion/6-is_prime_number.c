#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number.
 *         0 if n is not a prime number.
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if ((n - 1) == 1)
		return (1);
	if (n % (n - 1) == 0 && (n - 1) > 0)
		return (0);
	return (is_prime_number(n - 1));
}
