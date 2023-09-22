#include "main.h"

/**
 * *leet -  encodes a string into 1337.
 *@str: The string to be encoded.
 *
 * Return: char always.
 */

char *leet(char *str)
{
	int i, j;

	char leet_chars[] = "AaEeOoTtLl";
	char leet_replacement[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacement[j];
				break;
			}
		}
	}

	return (str);
}
