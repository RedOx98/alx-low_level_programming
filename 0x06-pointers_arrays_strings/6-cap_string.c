#include "main.h"
#include <stdbool.h>


/**
  * is_separator Checks if a character is word separator.
  * @c: characteer to check.
  * Return: true if it's a separator, false otherwise.
  */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}

	return (false);
}


/**
 * *cap_string -  capitalizes all words of a string
 *
 *
 * @str: first parameter.
 * Return: char always.
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
