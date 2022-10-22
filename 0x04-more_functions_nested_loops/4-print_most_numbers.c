#include "main.h"
/**
 * print_most_numbers - print numbers
 * Description: do not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char c = 0;

	while (c < 10) 
	{
		if (c != '2' && c != '4')
			_putchar(c + '0');

		c++;
	}
	_putchar('\n');
}
