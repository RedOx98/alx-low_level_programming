#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
/**
  * print_diagonal - draws a diagonal line in the terminal.
  *
  * @n: parameter expected as int type.
  */

	void print_diagonal(int n)
	{
		if (n <= 0)
		{

			putchar('\n');
		}
		else
		{
			int i, j;

			for (i = 0; i <= n; i++)
			{
				for (j = 0; j < i; j++)
				{
					putchar(' ');
				}
				putchar('\\');
				putchar('\n');
			}
		}

	}

	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);

	return (0);
}
