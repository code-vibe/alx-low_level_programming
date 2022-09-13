/*
 * File: 7-print_last_digit.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int x, y, result;

	if (!(n > 15 || n < 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				result = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && y != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
