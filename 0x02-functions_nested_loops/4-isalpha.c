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
 * _isalpha - checks character is alphabet
 * @c: input parameter c expected by function.
 *
 * Return: 1 if alphabet. 0 if otherwise.
 */
	int _isalpha(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	int r;

	r = _isalpha('a');
	putchar(r + '0');
	r = _isalpha('A');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');

	return (0);
}
