#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to set in the new node.
 * Return: Address of the new element or NULL if failed.
 */

listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*new_node;
	listint_t	*curr;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
		(*head)->next = NULL;
		return (new_node);
	}
	curr = *head;
	*head = new_node;
	(*head)->next = curr;
	return (new_node);
}
