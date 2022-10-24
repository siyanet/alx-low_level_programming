#include "main.h"

/**
  *swap_int - will swap the values of two integer
  *@a: first number
  *@b: second number
  *Return: none
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
