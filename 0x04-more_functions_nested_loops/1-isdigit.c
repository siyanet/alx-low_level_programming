#include "main.h"

/**
  *_isdigit -prints whether the arugument is digit or not
  *@c: the argument
  *Return: 1 if it is digit or 0 other wise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
