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
 * delete_nodeint_at_index - Delete the node at the specified index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 * Return: 1 if succeeded, -1 if failed.
 */

int	delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t		len;
	int			i;
	listint_t	*temp;
	listint_t	*temp2;

	if (!head || !(*head))
		return (-1);
	len = listint_len(*head);
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < (int)index - 1; i++)
	{
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
