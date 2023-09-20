#include <stdio.h>
#include "main.h"

/**
  * *_strcpy - prints n elements of an array of integers
  * followed by a new line.
  *
  * @src: first  parameter
  * @dest: second  parameter
  *
  * Return: nothing always
  */

char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
