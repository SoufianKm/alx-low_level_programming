#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located otherwise
 *         -1 on failure or not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, jmp, end = 0;

	if (!array || size == 0)
		return (-1);

	jmp = sqrt(size);
	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		end += jmp;
	}

	start = end - jmp;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	end = end >= size ? size - 1 : end;
	while  (start <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return ((int)start);
		start++;
	}

	return (-1);
}
