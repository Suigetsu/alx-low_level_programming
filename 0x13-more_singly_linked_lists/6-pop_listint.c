#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t list and return its data.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data of the head node or 0 if empty.
 */

int	pop_listint(listint_t **head)
{
	int			head_n;
	listint_t	*temp;

	head_n = 0;
	temp = NULL;
	if (!*head)
		return (0);
	head_n = (*head)->n;
	if ((*head)->next)
		temp = (*head)->next;
	free(*head);
	*head = temp;
	return (head_n);
}
