#include "main.h"

/**
  *cap_string - change strings to upper case
  *@s: character pointer
  *Return: pointer
  */
char *cap_string(char *s)
{
	char *s1 = s;

	if (*s != '\0' && (*s >= 'a' && *s <= 'z'))
	{
		*s = *s - 32;

		s++;
	}
	while (*s != '\0')
	{
		if (*s == '\n' || *s == '\t' || *s == ' ' || *s ==  ',' ||
				*s == ';' || *s == '.' || *s == '!' ||
				*s == '?' || *s ==  '"' || *s == '(' ||
				*s == ')' || *s == '{' || *s == '}')
		{
			s++;

			if(*s == '\n' || *s == '\t' || *s == ' ' ||
					*s == ',' || *s == ';' ||
					*s == '.' || *s == '!' ||
					*s == '?' || *s == '"' ||
					*s == '(' || *s == ')' ||
					*s == '{' || *s == '}')
			{
				s++;
				if (*s != '\0' && (*s >= 'a' && *s <= 'z'))
				{
					*s = *s - 32;

					s++;

				}
			}
			else if (*s != '\0' && (*s >= 'a'  && *s <= 'z'))
			{
				*s = *s - 32;

				s++;

			}
			else
			{
				s++;
			}
		}
		else
		{
			s++;

		}
	}
	return (s1);
}
