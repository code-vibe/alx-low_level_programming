/*
 * File: 0-isupper.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
 /**
  * _isupper - return 1 if parameter is uppercase alphabet
  * @c: the character to check
  * Return:  0 (failure)
  */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{

	if (i == c)
	{
		return (1);
	}
	}

	return (0);
}
