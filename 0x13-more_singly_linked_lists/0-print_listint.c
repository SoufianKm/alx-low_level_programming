#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to linked list type listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nbr++;
		h = h->next;
	}

	return (nbr);
}
