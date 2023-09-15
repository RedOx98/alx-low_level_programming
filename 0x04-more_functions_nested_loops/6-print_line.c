#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
/**
  * print_line - draws a straight line in the terminal.
  *
  * @n: parameter expected as int type.
  */

	void print_line(int n)
	{
		if (n <= 0)
		{

			putchar('\n');
		}
		else
		{
			int i;

			for (i = 0; i <= n; i++)
			{
				putchar('_');
			}
		}

	}

	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	putchar('\n');
	return (0);
}
