#include "main.h"

/**
 * _atoi - own version of atoi
 * @s: the str that we will turn to int from ascii
 * Return: the int value
 */

int	_atoi(char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (!(s[i] >= '0' && s[i] <= '9') && s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + s[i++] - '0';
	return (res * sign);
}
