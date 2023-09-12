#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lower, and then in uppercase, followed
 * by a new line.
 *
 * Return: 0 to terminate the program
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	putchar(lowercase);
	putchar(uppercase);

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
		putchar('\n');
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase += 1;
		putchar('\n');
	}

	return (0);
}
