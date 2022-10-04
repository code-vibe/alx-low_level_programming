#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * Prototype: char *str_concat(char *s1, char *s2);
 * The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the
 * contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;

	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strout = malloc(sizeof(char) * (i + j + 1));
		if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		strout[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];
	return (strout);
}
