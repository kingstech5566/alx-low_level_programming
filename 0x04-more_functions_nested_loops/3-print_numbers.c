#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Description: prints numbers from 0 to 9
 * Return: Numbers printed
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c < '9'; c++)
	{
		_putchar(c + '0');
	}
	_putchar ('\n');
}
