#include "main.h"

/**
  *_isalpha -return 1 if the letter is lower or return  if it is not
  *Return: sucess 1 failer 0
  */
int _isalpha(int c)
{
	char a = char(c);

	if ('A' <= a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
