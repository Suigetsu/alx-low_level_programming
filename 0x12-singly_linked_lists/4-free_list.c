#include "lists.h"

/**
 * free_list - Free a list_t list.
 * @head: Pointer to the head of the list_t.
 *
 * Description:
 *    This function frees all nodes of a list_t linked list.
 */

void	free_list(list_t *head)
{
	list_t	*temp;

	while (head)
	{
		temp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
}
