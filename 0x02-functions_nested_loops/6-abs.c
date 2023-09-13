#include <stdio.h>

/**
  * main - check the code
  *
  * Return: Always 0.
  */

int main(void)
{
/**
  * _abs - prints the absolute of a number.
  *
  * @n: parameter expected.
  *
  * Return: absolute value.
  */

	int _abs(int n)
	{
		if (n < 0)
		{
			return (-n);
		}
		else
		{
			return (n);
		}
	}

	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
