#include <stdio.h>
#include "main.h"

/**
  * main - checks code
  *
  * Return: nothing always
  */

int main(void)
{
	int m;
	int *p;

	m = 402;
	printf("n=%d\n", m);
	p = &m;

	reset_to_98(p);
	printf("n=%d\n", m);

	return (0);
}
