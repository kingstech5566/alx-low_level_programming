#include "main.h"
/**
 * int _isupper - print uppercase letter
 * Description: print Uppercase
 * @c: char to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
