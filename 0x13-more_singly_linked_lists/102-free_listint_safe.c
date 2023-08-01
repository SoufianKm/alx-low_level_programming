#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @head: Pointer to the first node in the linked list.
 * Return: Number of elements freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current, *next;

	if (!head)
		return (0);

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		count++;
		if (current >= next)
			break;
	}

	*head = NULL;
	return (count);
}

