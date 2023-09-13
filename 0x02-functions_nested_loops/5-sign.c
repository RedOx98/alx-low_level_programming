#include <stdio.h>
#include <ctype.h>
/**
  * main - Prints signs of numbers below or above Zero(0).
  *
  * Return: 0 to end the program.
  */

int main(void)
{
/**
  * print_sign - prints the signs associated with numbers greater or below 0.
  * @n: parameter arguments expected.
  *
  * Return: + if number above 0. - if below 0.
  */
	int print_sign(int n)
	{
		if (n > 0)
		{
			printf("+");
			return (1);
		}
		else if (n == 0)
		{
			printf("0");
			return (0);
		}
		else
		{
			printf("-");
			return (-1);
		}
	}

	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	return (0);
}
