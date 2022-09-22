/*
 * File: 5-string_toupper.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * string_toupper - Capitalize whole string.
 *
 * @s: string to be capitalized
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (s);
}
