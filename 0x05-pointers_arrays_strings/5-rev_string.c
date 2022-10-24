#include "main.h"

/**
  *rev_string - make the string in reverse order
  *@s: string argument
  *Return: nothing
  */
void rev_string(char *s)
{
	int i, j, n;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	n = i;

	char t[n];

	for (; i >= 0; i-- && j = 0; j <= n; j++)
	{
		t[j] = s[i];

	}
	for (j = 0; j <= n; j++)
	{
		s[j] = t[j];

	}
	s[j + 1] = '\0';

}
