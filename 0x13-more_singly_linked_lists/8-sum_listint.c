#include "lists.h"

/**
 * sum_listint - Get the sum of all the data (n) in a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data or 0 if the list is empty.
 */

int	sum_listint(listint_t *head)
{
	int	sum;

	sum = 0;
	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
