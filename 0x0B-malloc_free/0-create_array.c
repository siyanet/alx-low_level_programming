#include "main.h"

/**
 * create_array -creates array
 * @c: initialized character
 *@size: size of array
 *Return: poniter to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;

	}
	return (arr);
}
