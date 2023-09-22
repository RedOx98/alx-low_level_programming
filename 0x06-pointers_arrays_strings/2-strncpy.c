#include "main.h"

/**
 * *_strncpy -  should work exactly like strncpy
 *
 *
 * @dest: first parameter.
 * @src: second parameter.
 * @n: third parameter.
 * Return: char always.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
