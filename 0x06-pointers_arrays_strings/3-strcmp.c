#include "main.h"

/**
 * _strcmp -  should work exactly like strcmp
 *
 *
 * @s1: first parameter.
 * @s2: second parameter.
 * Return: char always.
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	a = (unsigned char)*s1 - (unsigned char)*s2;
	return (a);
}
