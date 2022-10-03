#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: legenth of argv
 *
 * @argv: number of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*Convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	/*Declaring WHILE*/

	while (coins[position] != '\0')

	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;

	}

	printf("%d\n", change);
	return (0);
}
