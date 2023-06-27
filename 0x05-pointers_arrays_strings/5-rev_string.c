#include "main.h"

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	rev_string(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = _strlen(s) - 1;
	while (i < _strlen(s) / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
