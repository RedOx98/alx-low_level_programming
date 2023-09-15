#include <stdio.h>

/**
  * main - check code.
  *
  * Return: 0 always
  */

int main(void)
{
/**
  * print_most_numbers - Prints most numbers from 0-9
  *
  *
  */

	void print_most_numbers(void)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			if (i != 2 && i != 4)
			{
				printf("%d", i);
			}
		}
	}
	print_most_numbers();
	printf("\n");
	return (0);
}
