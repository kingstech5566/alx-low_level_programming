#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_prime_number - Checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: if the number is divisible - 0
 * if the number is not divisible - 1
 */
int is_prime_number(int n)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}
