#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
/**
  * print_square - draws a diagonal line in the terminal.
  *
  * @n: parameter expected as int type.
  */

	void print_square(int n)
	{
		if (n <= 0)
		{
			putchar('\n');
			return;
		}
		else
		{
			int i, j;

			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= i; j++)
				{
					putchar('#');
				}
				putchar('\n');
			}
		}

	}

	print_square(0);
	print_square(2);
	print_square(10);
	print_square(-4);

	return (0);
}
