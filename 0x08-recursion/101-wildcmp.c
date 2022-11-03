#include "main.h"

/**
  *str_checker -check if the string are equal
  *@s1: string1
  *@s2: string2
  *@i: right index
  *@j: left index
  *Return: 1 if they are equal
  */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (str_checker(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (str_checker(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	}
	return (0);
}
/**
  *wildcmp -check if strings are equal or not
  *@s1: string1
  *@s2: string2
  *Return: 1 if the are equal
  */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
