#include "main.h"

/**
  *_pow_recursion -prints power of a number
  *@x: number
  *@y: number
  *Return: power of anumber
  */
int _pow_recursion(int x, int y)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
