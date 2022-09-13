
/*
 * File: 11-print_to_98.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
