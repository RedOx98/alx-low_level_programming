#include <stdio.h>
#include "main.h"

/**
  * main - checks code
  *
  * Return: 0 always
  */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);

	printf("%s\n", s);

	return (0);
}
