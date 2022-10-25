#include "main.h"

/**
 * print_remaining_days - pick a date
 * and print how many is left
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of year
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			 printf("Day of the year: %d\n", day);
			 printf("Remaining days: %d\n", 365 - day);
		}
	}
}