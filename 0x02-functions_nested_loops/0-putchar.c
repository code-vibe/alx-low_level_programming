
/*
 * File: 0-putchar.c
 * Auth: Ebenezer Sam-Oladapo
 */
#include "Makeup.h"
/**
 * main - This code prints _putchar 
 * Return: 0 on success
 */
int main(void)
{
	char c[] = "Makeup";
	int i;

	for (i=0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n);
	return (0);
}
