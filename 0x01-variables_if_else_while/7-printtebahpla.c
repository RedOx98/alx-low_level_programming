#include <stdio.h>

/**
  * main - Prints alphabet a tebahpla
  *
  * Return: 0 to terminate the program
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		putchar('\n');
		letter--;
	}

	return (0);
}
