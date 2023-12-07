#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: doubly linked list
 * @n: integer number
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	new->next = h;
	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
