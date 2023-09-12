#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the last digit of a random value in a string and prints
 * out greater or less 5 or is zero or less than and not zero.
 *
 * Return: 0 to terminate the program.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;
	if (digit > 5)
	{
		printf("The value is %d and is greater than 5\n", digit);
	}
	else if (digit == 0)
	{
		printf("The value is %d and is zero\n", digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("The value is %d and is less than 6 and not 0\n", digit);
	}
}
