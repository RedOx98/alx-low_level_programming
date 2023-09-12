#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a newline.
 *
 * Return: 0 to terminate the program.
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		char invalid_char1 = 'e';

		char invalid_char2 = 'q';

		if (lowercase != invalid_char1 && lowercase != invalid_char2)
		{
			putchar(lowercase);
			putchar('\n');
		}
		lowercase += 1;
	}

		return (0);
}
