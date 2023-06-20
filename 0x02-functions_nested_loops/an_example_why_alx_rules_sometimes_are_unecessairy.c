#include "main.c"

/**
 * print_alphabet_x10 - printing alphabets 10 times in lowercase
 * Description: we've already made a function that prints all the alphabet in lowercase.
 * Ths simplest way to do this task is to loop on the previous function 10 times.
 * But no, they're asking us to do it the hard, long and most unecessairy way.
 * This way you limit people and teach them that there's only one way to do things.
 * Instead of letting people experiment, be creative and get the final result the way they want.
 */

void	print_alphabet_x10(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
