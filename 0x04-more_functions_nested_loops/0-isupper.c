#inlcude "main.h"

/**
  *_isupper -prints if the letter is upper or not
  *@c: the character that wil be checked
  *Return: 1 if it is upper or 0 otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
