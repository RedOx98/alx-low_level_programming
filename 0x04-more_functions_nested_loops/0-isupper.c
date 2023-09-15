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
  * _isupper - checks if character is uppercase
  * @n: expects params
  *
  * Return: 0 to end function
  */
	int _isupper(char n)
	{
		if (n >= 'A' && n <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

