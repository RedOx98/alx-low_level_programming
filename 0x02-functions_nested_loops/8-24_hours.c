#include <stdio.h>
/**
  * main - check the code
  *
  * Return: Always 0.
  */

int main(void)
{

/** jack_bauer - Prints a ll the instances of time.
  *
  * @void: expects nothing.
  * Return: 0 indicating end of loop
  */
	void jack_bauer(void)
	{
		int hour, minute;

		for (hour = 0; hour < 24; hour++)
		{
			int minute;

			for (minute = 0; minute < 60; minute++)
			{
				printf("%02d:%02d\n", hour, minute);
			}
		}
	}

	jack_bauer();

	return (0);
}
