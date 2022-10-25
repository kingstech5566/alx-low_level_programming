#include "main.h"

/**
 * swap_int - swaps the two values of integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
