#include "lists.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string
 * Return: the length
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * add_node - Add a new node at the beginning of list_t.
 * @head: Double pointer to the head of the list_t.
 * @str: String to be duplicated and added as a new node.
 *
 * Description:
 *    This function adds a new node at the beginning of a list_t linked list.
 *
 * Return: Address of the new element, or NULL if failed.
 *         The new element contains a duplicated string (str).
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new_node;
	list_t	*last;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = (unsigned int)_strlen((char *)str);
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	last = *head;
	*head = new_node;
	(*head)->next = last;
	return (new_node);
}
