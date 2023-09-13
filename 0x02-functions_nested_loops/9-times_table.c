#include <stdio.h>

/**
  * main - check code
  *
  * Return: 0 always
  */

int main(void)
{

/**
  * times_table - Prints 9 multiplication tables.
  * @void: expects nothing.
  * Return: void always
  */
	void times_table(void)
	{
		int i, j;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9 ; j++)
			{
				printf("%d", j * i);
				printf(",");
				printf(" ");
			}
			printf("\n");
		}
	}

	times_table();
	printf("\n");
	return (0);
}
