#include <stdio.h>
#include <ctype.h>
/**
  * main - checks for lowercase character by returning 0 is lowercase
  * and 1 if uppercase
  * @c - integer parameter
  *
  * Return: 0 to end the program.
  */

int main(void)
{
/**
  * _islower - checks for character if it's lowercase.
  * @c: parameter input to be checked
  *
  * Return: 0 if lowercase. 1 if uppercase
  */
	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
