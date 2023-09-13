#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Print random positive or negative numbers
 *
 * Return: 0 to end the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("the value is %d and positive\n", n);
	}
	else if (n == 0)
	{
		printf("the value is %d and zero\n", n);
	}
	else if (n < 0)
	{
		printf("the value is %d and negative\n", n);
	}
}
