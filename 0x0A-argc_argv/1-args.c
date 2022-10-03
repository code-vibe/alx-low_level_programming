#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments
 * passed into it
 * Your program should print a number, followed by a new line
 *
 * @argc: Argument count
 *
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
