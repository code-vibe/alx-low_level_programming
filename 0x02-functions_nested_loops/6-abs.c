/*
 * File: 6-abs.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"
/**
 * _abs - calculate absolute value of the number from zero.
 * @i: parameter.
 * Return: absolute value of input.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
