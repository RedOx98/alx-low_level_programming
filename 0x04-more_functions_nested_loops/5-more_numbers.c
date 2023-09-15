#include <stdio.h>

/**
  * main - check code
  *
  * Return: 0 always
  */

int main(void)
{

/**
  * more_numbers - Prints 14 multiplication tables.
  * @void: expects nothing.
  * Return: void always
  */
	void more_numbers(void)
	{
		int i, j;

		for (i = 1; i <= 14; i++)
		{
			for (j = 0; j <= 14 ; j++)
			{
				printf("%d", j * i);
			}
			printf("\n");
		}
	}

	more_numbers();
	printf("\n");
	return (0);
}
