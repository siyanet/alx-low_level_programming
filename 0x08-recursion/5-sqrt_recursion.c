#include "main.h"

/**
  *check - check the square root
  *@a: squareroot
  *@n: number
  *Return: squreroot
  */
int check(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}
	if (a * a > n)
	{
		return (-1);
	}
	return (check(a + 1, n));
}
/**
  *_sqrt_recursion -printssquare root of anumber
  *@n: number
  *Return: square root
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
