/*
 * File: 6-print_line.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * print_line - print _ * n
 * @n: number  of _ to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
