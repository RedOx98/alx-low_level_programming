#include "main.h"

/**
 * *string_toupper -  should convert lower case to upper case
 *
 *
 * @str: first parameter.
 * Return: char always.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
