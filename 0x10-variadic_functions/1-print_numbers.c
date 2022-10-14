#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * print_numbers - print numbers
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(numbers, int));
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}


	va_end(numbers);
	printf('\n');

}
