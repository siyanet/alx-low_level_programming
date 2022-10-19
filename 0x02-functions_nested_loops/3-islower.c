#include "main.h"

/**
  *_islower -return 1 if the letter is lower or return  if it is not
  *Return: sucess 1 failer 0
  */
int _islower(int c)
{
	char a = char(c);

	if ('a' <= a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
