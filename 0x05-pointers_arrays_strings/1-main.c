#include <stdio.h>
#include "main.h"

/**
  * main - checks code
  *
  * Return: nothing always
  */

int main(void)
{
	int a;
	int b;

	int *p;
	int *q;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	p = &a;
	q = &b;

	swap_int(p, q);
	printf("a=%d, b=%d\n", a, b);

	return (0);
}
