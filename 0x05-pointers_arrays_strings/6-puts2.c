#include "main.h"

/**
 * puts2 - printing every other char starting from the first
 * @str: the str we're gonna print from
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
