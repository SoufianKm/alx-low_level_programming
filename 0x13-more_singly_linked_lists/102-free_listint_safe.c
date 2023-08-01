#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to the first node in the linked list.
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
		if ((current - current->next) > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
			count++;
		}
		else
		{
			free(current);
			current = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
