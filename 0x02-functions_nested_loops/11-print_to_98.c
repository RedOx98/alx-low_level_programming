#include <stdio.h>

/**
  * main - checks code.
  *
  * Return: 0 always
  */

int main(void)
{
/**
  * print_to_98 - prints all natural numbers from 0 to 98
  *
  * @n: parameter expected integer type
  * Return: void
  */

	int print_to_98(int n)
	{
		if (n <= 98)
		{
			for (int i = n; i <= 98; i++)
			{
				if (i != 98)
				{
					printf("%d", i);
					printf(",");
					printf(" ");
				}
				else
				{
					printf("%d\n", i);
					printf(",");
					printf(" ");
				}
			}
		}
		else if (n >= 98)
		{
			for (int i = n; i >= 98; i--)
			{
				if (i != 98)
				{
					printf("%d", i);
					printf(",");
					printf(" ");
				}
				else
				{
					printf("%d\n", i);
					printf(",");
					printf(" ");
				}
			}
		}
	}

	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);

}
