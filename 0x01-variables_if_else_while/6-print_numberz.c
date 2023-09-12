#include <stdio.h>

/**
 *main - Prints all single digits of base 10 from 0 -9
 *
 * Return: 0 to terminate the program.
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar('\n');
	}

	return (0);
}
