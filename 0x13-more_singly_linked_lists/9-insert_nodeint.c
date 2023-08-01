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
 * insert_nodeint_at_index - Insert a new node at a given position in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Value to set in the new node.
 * Return: Address of the new node or NULL if failed.
 */


listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t		*new_node;
	listint_t		*curr;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = listint_len(*head);
	if (idx > len + 1)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	while (i < idx - 1)
	{
		curr = curr->next;
		i++;
	}
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
