#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print all argument
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list c
	
	if (seperator == NULL)
		seperator = "";
	
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(c, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n-1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(c);
}
