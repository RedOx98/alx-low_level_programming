#include <stdio.h>
/**
  * main - Prints the alphabet, in lowercase, followed by a new line.
  *
  * Return: 0 to terminate the program.
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}

	return (0);
}
