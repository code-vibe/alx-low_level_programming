/*
 * File: 2-strlen.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Description: returns the length of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
