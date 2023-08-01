#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @head: Pointer to the first node in the linked list.
 * Return: Number of elements freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	current = *h;
	while (current)
	{
		temp = current->next;
		free(current);
		count++;
		if (current >= temp)
			break;
		current = temp;
	}

	*h = NULL;
	return (count);
}
