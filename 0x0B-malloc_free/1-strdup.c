#include "main.h"
#include <stdlib.h>

/**
 * _strdup - write a function that returns a pointer to a newly allocated space
 * in memeory which contains a copy of the string given as a parameter
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 *
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *strout;

	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	strout[j] = str[j];
		return (strout);
}
