#include "main.h"
#include <stdio.h>

/**
  *print_array -prints array
  *@a: array of numbers
  *@n: number of array objects
  */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		if (l != n - 1)
		{
			printf("%d, ", a[l]);

		}
		else
		{
			printf("%d", a[l]);

		}
	}
	printf("\n");

}
