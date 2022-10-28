#include "main.h"

/**
  *print_to_98 -prints number n to 98
  *@n: integer
  */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);

		}
		printf("\n");

	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);

		}
		printf("\n");

	}
}
