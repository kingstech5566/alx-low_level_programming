#include "function_pointers.h"

/**
 * int_index - earches fr an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer of the comparing function
 *
 * Return: index of the firts element for which
 * the cap function does not return 0, or -1 if no match found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
