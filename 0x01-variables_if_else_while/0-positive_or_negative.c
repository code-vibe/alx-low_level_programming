/*
* File: 0-positive_or_negative.c
* Auth: Olayide Oluwagbemiga 
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and state whether
 	  it is positive, negative or zero.
	  
 * Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is %s\n", n, "negative");
	else if (n > 0)
		printf("%d is %s\n", n, "positive");
	else
		printf("%d is %s\n", n, "zero");
	return (0);

}
