#include <stdio.h>
/**
 * main - write a program that prints its name, followed by
 * a new line. If you remove the program, it will print the new
 * name, without having to compile it again.
 * You should not remove the path before the name of the program
 *
 * @argc:  count of arguments
 * @argv: array of arguments i.e argument vector
 *
 * Return: 1
 */

int main( int argc, char *argv[])
{
	printf("%s\n", argv[0]);
        (void)argc;
	return (0);
}
