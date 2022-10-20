#include "main.h"
/**
 * print_times_table - Prints a multiplication table up to param
 * @n: number to be treated
 * Return: Number amtrix
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; n++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y
					if (z > 9)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(((z / 10) % 10) + '0');
						_putchar((z % 10) + '0');
					}
					else
					{
						if (y != '0')
						{
							_putchar(',');
							_putchar(32);
							_putchar(32);
							_putchar(32);
						}
						_putchar(z + '0');
					}
			}
			_putchar('\n');
		}
	}
}
