#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
/**
  * fizz_buzz - prints, fizz, buzz or fizzbuzz.
  *
  * @n: parameter expected as int type.
  */

	void fizz_buzz(int n)
	{
		int i;

		for (i = 1; i < n; i++)
		{
			if (i % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
	}

	fizz_buzz(100);
	printf("\n");
	return (0);
}
