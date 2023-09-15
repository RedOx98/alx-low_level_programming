#include <stdio.h>
#include <stdlib.h>

/**
  * main - check the code.
  *
  * Return: Always 0.
  */

int main(void)
{
/**
  * _isdigit: checks for a digit through 0-9.
  * @n: param int type expected.
  *
  * Return: 1 if digit. else 0 if not.
  */

	int _isdigit(int n)
	{
		if (n >= '0' && n <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
