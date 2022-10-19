#include "main.h"

/**
  *_islower -return 1 if the letter is lower or return  if it is not
  *@c: the character that will be cheacked
  *Return: sucess 1 failer 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
