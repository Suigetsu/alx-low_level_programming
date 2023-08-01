#include "lists.h"

/**
 * print_listint - Print all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */

size_t	print_listint(const listint_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
