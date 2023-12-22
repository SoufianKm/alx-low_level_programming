#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table,
 * otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size == 0)
		return (NULL);

	hash_table = calloc(1, sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t **));

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
