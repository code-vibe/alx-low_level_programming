/*
 * File:2-print_alphabet_x10.c
 * Auth: Ebenezer Sam-Oladapo
 */
#include "main.h"
/**
 * print_alphabet_x10 - This code writes a function
 *	that prints 10 times the
 *	alphabet in lowercase
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
