#include <stdio.h>
/**
  * main - check the code
  *
  * Return: 0 always
  */

int main(void)
{
/**
  * print_numbers - print 0-9
  *
  * Return: void
  */
	void print_numbers(void)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			printf("%d", i);
		}
	}
	print_numbers();
	printf("\n");
	return (0);
}
