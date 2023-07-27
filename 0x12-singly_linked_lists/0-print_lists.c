#include "lists.h"

/**
 * print_list - Print all elements of a list_t.
 * @h: Pointer to the head of the list_t.
 *
 * Description:
 *    This function prints all elements of a list_t linked list.
 *
 * Return: Number of nodes.
 */

size_t	print_list(const list_t *h)
{
	size_t	count;

	count = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
