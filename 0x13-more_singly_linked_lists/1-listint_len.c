#include "lists.h"

/**
 * listint_len - Get the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements.
 */

size_t	listint_len(const listint_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
