#include "main.h"

/**
 * _strcat -  it will use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 *
 * @dest: first parameter.
 * @src: second parameter.
 * @n: third parameter.
 * Return: char always.
 */

char *_strncat_custom(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];

		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
