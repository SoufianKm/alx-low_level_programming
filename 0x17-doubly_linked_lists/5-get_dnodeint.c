#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the dlistint_t list
 * @index: the index of the node, starting from 0
 *
 * Return: NULL if the node does not exist, otherwise the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);
}
