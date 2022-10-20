#include "main.h"
/**
 * times_table - print the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			product = row * column;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
		}
	}
}
