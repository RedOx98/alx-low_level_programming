#include <stdio.h>
/**
 * main - prints  all the numbers of base 16 in lowercase, followed by a
 * new line.
 *
 * Return: 0 to terminate the program.
 */

int main(void)
{
	char hex = '0';

	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}

	hex = 'a';

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');

	return (0);
}
