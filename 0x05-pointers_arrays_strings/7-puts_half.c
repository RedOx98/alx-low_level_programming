#include <stdio.h>
#include "main.h"

/**
  * puts_half - to return half of the whole string sent to it
  *
  * @str: string parameter
  *
  * Return: string value
  */

void puts_half(char *str)
{
	int n = 0;
	int i;
	int start;

	while (str[n] != '\0')
	{
		n++;
	}

	start = (n + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
