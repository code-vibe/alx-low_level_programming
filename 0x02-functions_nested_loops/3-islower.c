/*
 * File: 0-positive_or_negative.c
 * Auth: Ebenezer Sam-Oladapo
 */
#include "main.h"
/**
 * 3-islower.c -This program check
 *		if a character is a lowercase
 *		letter from the English alphabet
 * Return: 1 for lowercase, 0 if it's not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
