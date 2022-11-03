#include "main.h"

/**
  *strlen - prints stringlength
  *@s: string
  *Return: length of string
  */
int strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen(s + 1));
	}
	return (0);
}
/**
  *pal_checker -check if s is palindrome or not
  *@i: right index
  *@j: left index
  *@s: string
  *Return: 1 or 0
  */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (pal_checker(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}
/**
  *is_palindrome -check if s is palindrome or not
  *@s: string
  *Return: 1 or 0
  */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
