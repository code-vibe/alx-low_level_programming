
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
	int i;

	for (i = n; i < 98; i++)
		printf("%i, ", i);
	for (i = n; i > 98; i--)
		printf("%i, ", i);
	printf("98\n");
}
