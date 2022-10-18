#include "main.h"
/**
 * main - print a putchar program
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'f'; letter++)
		_putchar(letter, '\n');

	return (0);
}
