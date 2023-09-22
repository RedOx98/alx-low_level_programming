#include "main.h"

/**
 * *_strcat -  appends the src string to the dest string,
 * overwriting the terminating null byte
 * (\0) at the end of dest, and then adds a terminating null byte
 *
 * @dest: first parameter.
 * @src: second parameter.
 * Return: char always.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];

		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
