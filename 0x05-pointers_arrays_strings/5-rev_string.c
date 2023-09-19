#include <stdio.h>
#include "main.h"

/**
  * rev_string - Prints the reverse of a string
  *
  * @s: string parameter
  *
  * Return: nothing always
  */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
