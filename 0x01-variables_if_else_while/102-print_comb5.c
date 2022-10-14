#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry
  *Return: Always 0
  */
int main(void)
{
	int m;

	int l;

	int i;

	int k;

	for (m = 0; m < 10; m++)
	{
		for (i = 0; i < 10; i++)
			{
				for (k = 0; k < 10; k++)
				{
					for (l = i + 1; l < 10; l++)
					{
		putchar('0' + m);

		putchar('0' + i);

		putchar(' ');

		putchar('0' + k);

		putchar('0' + l);

		if (m == 9 && i == 8 && k == 9 && l == 9)
		{
			break;
		}
		putchar(',');

		putchar(' ');

	}
	}
			}
	}

	putchar('\n');
	return (0);
}
