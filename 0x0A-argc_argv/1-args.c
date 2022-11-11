#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Counts arguments
 * @argv: Arguments
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("%i\n", argc - 1);

	return (0);
}
