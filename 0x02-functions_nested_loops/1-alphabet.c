/*
 * File: 0-positive_or_negative.c
 * Auth: Ebenezer Sam-Oladapo
 */
#include "main.h"
/**
 * print_alphabet -This program prints
 *		 the english alphabet from a-z.
 * Return: Void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
