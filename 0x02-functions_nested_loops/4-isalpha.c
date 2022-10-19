#include "main.h"

/**
  *_isalpha -return 1 if the letter is lower or return 0 other wise
  *@c: is the character that will be checked
  *Return: 1 if it is alphabet or 0
  */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
