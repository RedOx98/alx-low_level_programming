#include "main.h"
/**
  * swap_int - swap two parameters a and b
  * @a: parameter a
  * @b: parameter b
  *
  * Return: nothing always
  */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;
	*b = t;
}


