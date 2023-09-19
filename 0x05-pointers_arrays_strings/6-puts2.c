#include <stdio.h>
#include "main.h"

/**
  * puts2 - to return every other string sent to it
  *
  * @str: string parameter
  *
  * Return: string value
  */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		putchar(str[n]);
		n += 2;
	}

	putchar('\n');
}
