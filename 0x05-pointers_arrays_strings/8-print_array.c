#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element from an array
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		printf("%\d", a[h]);
		if (h != n - 1)
			printf(", ");
	}

	printf("\n");
}
