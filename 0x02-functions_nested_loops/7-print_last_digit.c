#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */

int main(void)
{
/**
  * print_last_digit - Prints the last digit of a number.
  * @n: expects integer param
  *
  * Return: last digit of a value.
  */
	int print_last_digit(int n)
	{
		int c;

		c = 10;

		int d;

		d = n % c;
		if (d < 0)
		{
			d = -d;
		}

		printf("%d", d);
		return (d);
	}

	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
