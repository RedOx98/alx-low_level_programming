#include <stdio.h>

/**
  * main - Prints the alphabet, in lowercase, followed by a new line.
  *
  * Return: 9 to end the program.
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
			putchar('\n');
		}
	}

	return (0);
}
