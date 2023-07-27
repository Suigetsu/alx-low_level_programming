#include "lists.h"

/**
 * list_len - Get the number of elements in a list_t.
 * @h: Pointer to the head of the list_t.
 *
 * Description:
 *    This function counts the number of elements in a list_t linked list.
 *
 * Return: Number of elements in the list_t.
 */

size_t	list_len(const list_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
