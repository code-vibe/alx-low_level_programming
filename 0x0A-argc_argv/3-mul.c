#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the 
 * multiplication can be stored in an integer
 *
 * @argc: Argument count
 *
 * @argv: Array of argument strings
 *
 * Return: 0 for successful exit
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
