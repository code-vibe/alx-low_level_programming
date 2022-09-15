/*
 * File: 1-isdigit.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - return 1 if parameter is isdigit
 * @c: the character to check
 * Return:  0 (failure)
 */

int _isdigit(int c)
{

	int i;


	for (i = '0'; i <= '9'; i++)
	{

		if (i == c)
		{
			return (1);
		}
	}


	return (0);

}
