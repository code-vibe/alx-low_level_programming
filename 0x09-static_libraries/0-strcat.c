/*
 * File: 0-strcat.c
 * Auth: Ebenezer Sam-Oladapo
 */

#include "main.h"

/**
 * _strcat - concatenates two string together
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';

	return (dest);
}
