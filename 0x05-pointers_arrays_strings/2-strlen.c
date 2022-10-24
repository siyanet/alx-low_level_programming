#include "main.h"

/**
  *_strlen -prints the length of string
  *@s: the derefernsing string
  *Return: string length
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		++i;

	}
	return (i);
}
