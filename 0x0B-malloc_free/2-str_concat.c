#include "main.h"
#include <stdlib.h>
/**
 *str-concat -concatnate string
 *@s1: string one
 *@s2: string two
 *Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, len;
	char *result;

	if (s1 != NULL)
	{
		i = 0;

		while (s1[i++] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		i = 0;

		while (s2[i++] != '\0')
		{
			len2++;
		}
	}
	len = len1 + len2;

	result = (char *)malloc(sizeof(char) * (len + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		result[i] = s2[j];
	}
	result[len] = '\0';

	return (result);
}
