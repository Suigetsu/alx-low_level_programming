#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this time we added while
 * Return: As always, 0 if everything went good
 */

int	main(void)
{
	int	n;
	int	i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n;
	if (n < 0)
		i *= -1;
	while (i > 10)
		i %= 10;
	if (n < 0)
		i *= -1;
	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("Last digit of %d is %d and is 0\n", n, i);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	return (0);
}
