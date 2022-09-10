#include <stdio.h>
/**
 * main - Prints alphabet in lowercase, then uppercase"
 * Return: 0 on success
 */
int main(void)
{
	char c = 'x';
	char d = 'X';

	while (c <= 'y')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Y')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
