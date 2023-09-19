#include "main.h"
/**
  * _strlen - count the number of character value
  * @s: parameter s
  *
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{

		length++;
	}

	return (length);
}


