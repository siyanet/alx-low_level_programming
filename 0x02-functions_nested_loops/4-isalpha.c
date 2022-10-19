#include "main.h"

/**
  *_isalpha -return 1 if the letter is lower or return  if it is not
  * @c: the character that will be checked 
  *Return: sucess 1 failer 0
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
