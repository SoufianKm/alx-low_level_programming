#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H /* SEARCH_ALGOS_H */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* MANDATORY */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* ADVANCED */
int jump_search(int *, size_t, int);
int interpolation_search(int *, size_t, int);

#endif /* SEARCH_ALGOS_H */
