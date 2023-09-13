#include <stdio.h>

/**
 * main - Prints Write a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: 0 to terminate the program.
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			putchar(m + '0');
			putchar('\n');
		}
	}

	return (0);
}
