/*
 * File: 4-rev_array.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
