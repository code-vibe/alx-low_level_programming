/*
 * File: 4-isalpha.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * _isalpha - this program checks wether a character
 *            is from the English alphabet.
 * @c: input parameter
 * Return: 1 for English Character
 *         0 if the character is not English
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
