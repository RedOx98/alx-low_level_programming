#include "main.h"

/**
 * reverse_array -  reverse loop the array
 *
 *
 * @a: first parameter.
 * @n: second parameter.
 * Return: nothing always.
 */

void reverse_array(int *a, int n)
{
	int l;
	int r;

	l = 0;
	r = n - 1;

	while (l < r)
	{
		int temp = a[l];

		a[l] = a[r];
		a[r] = temp;

		l++;
		r--;
	}
}
