#include <stdio.h>
#include "main.h"

/**
  *main -prints 1 to 100 and fizz and buzz and fizzbuzz
  *Return: always 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");

		}
		else if (i % 5 == 0 &&  i % 3 != 0)
		{
			printf("Buzz");

		}
		else if (i % 5 == 0 && i % 3  == 0)
		{
			printf("FizzBuzz");

		}
		else
		{
			printf("%i", i);

		}
		printf(" ");

	}
	return (0);
}
