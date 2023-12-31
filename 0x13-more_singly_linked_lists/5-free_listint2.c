#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and set the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */

void	free_listint2(listint_t **head)
{
	listint_t	*temp;

	if (!*head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
