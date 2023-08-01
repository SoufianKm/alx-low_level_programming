#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n) of a linked list
 * @head: pointer to the linked list (first node)
 * Return: 0 if list empty, the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		res += tmp->n;
		tmp = tmp->next;
	}

	return (res);
}
