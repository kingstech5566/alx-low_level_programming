#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size and assign char c
 * @size: the size of array
 * @c: the char assigned
 * Return: pointer of array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char str;
	unsigned int i;

	str = malloc(sizeof(car) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	
	for (i =0; i < size; i++)
		str[i] = c;
	return (str);