/*
 * File: 3-strcmp.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"

/**
 * _strcmp - Compares s1 and s2
 *
 * @s1: String to be compared against s2
 * @s2: String to be compared against s1
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
