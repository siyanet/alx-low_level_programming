#include "main.h"

/**
  *reverse_array - make array in reverse order
  *@a: array
  *@n: array size
  */
void reverse_array(int *a, int n)
{
	int i;

	int *t = a;

	for (i = 0; i < n - 1; i++)
	{
		a++;

	}
	for (i = 0; i < ((n - 1) / 2); i++)
	{
		*(a + n - 1 - i) = *(t + i);

		*(a + i) = *(t - n - 1 - i);

	}
}
