/*
 * File: 100-atoi.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * *_memset - concatenates two strings
 * @s:  pointer
 * @b: constant byte
 * @n: n bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
