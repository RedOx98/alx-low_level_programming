#include <stdio.h>

/**
  * main - check the code
  *
  * Return: Always 0.
  */

int main(void)
{
/**
  * mul - multiplies two integers.
  *
  * @a: first int
  * @b: second int
  *
  * Return: int value;
  */
	int mul(int a, int b)
	{
		int c;

		c = a * b;
		return (c);
	}

	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
