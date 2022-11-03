#include "main.h"

/**
  *check -check if the number is prime or not
  *@a: divisor
  *@n: number to be checked
  *Return: 1 or 0;
  */
int check(int a, int n)
{
	if (a < n)
	{
		if (n % a == 0)
		{
			return (0);
		}
		return (check(a + 1, n));
	}
	else
	{
		return (1);
	}
}
/**
  *is_prime_number - prints prime number
  *@n: number to be checked
  *Return: 0 if not prime 1 if prime
  */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	if (n <= 1)
	{
		return (0);
	}
	return (check(2, n));
}
