#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
