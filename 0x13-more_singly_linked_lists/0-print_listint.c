#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to listint_t
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
