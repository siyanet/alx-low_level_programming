#include "main.h"

/**
  *reverse_array - make array in reverse order
  *@a: array
  *@n: array size
  */
void reverse_array(int *a, int n)
{
	int i, c, d;

	for (i = 0; i < ((n - 1) / 2); i++)
	{
		c = a[i];

		d = a[n - 1 - i];

		a[n - 1 - i] = c;

		a[i] = d;

	}
}
