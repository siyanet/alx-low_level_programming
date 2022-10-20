#include <unistd.h>
#include "main.h"

/**
  *_putchar -prints the character
  *@c: the character
  *Return: 1 on sucess or -1
  */
int _putchar(char c)
{
	return(write(1, &c, -1));
}
