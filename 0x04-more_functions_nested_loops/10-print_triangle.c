#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
/**
  * print_triangle - draws a triangle in the terminal.
  *
  * @n: parameter expected as int type.
  */

	void print_triangle(int n)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		else
		{
			int i, j;

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
					if (j < n - i - 1)
					{
						putchar(' ');
					}
					else
					{
						putchar('#');
					}
					putchar('\n');
				}
			}
		}

	}

	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);

	return (0);
}
