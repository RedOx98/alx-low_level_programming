#include <stdio.h>
#include "main.h"

/**
  * main - checks code
  *
  * Return: nothing always
  */

int main(void)
{
	char *str = "My first strlen!";
	int len;

	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
