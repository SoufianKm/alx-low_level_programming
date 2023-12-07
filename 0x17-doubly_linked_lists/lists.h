#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_l - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_l
{
	size_t n;
	struct dlistint_l *next;
	struct dlistint_l *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
