#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Cunts arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/* Declaring variables */
	int count = 0;

	if (argc > 0)
	{
		/* While - print each arguments */
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
