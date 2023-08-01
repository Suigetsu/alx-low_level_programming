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

/**
 * get_nodeint_at_index - Get the nth node of a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 * Return: Pointer to the nth node or NULL if not found.
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = listint_len(head);
	if (index >= len || !head)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
