#include <stdio.h>

/**
  * main - checks code.
  *
  * Return: 0 always.
  */

int main(void)
{
/**
  * add - Prints the value of 2 integers addition.
  *
  * @a: first integer
  * @b: second integer
  *
  * Return: addition of two integers
  */

	int add(int a, int b)
	{
		int c;

		c = a + b;

		return (c);
	}

	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
