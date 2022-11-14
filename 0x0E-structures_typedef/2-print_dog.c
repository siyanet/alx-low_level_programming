#include "dog.h"
#include <stdio.h>
/**
 *print_dog -prints dog information
 *@d: pointer to dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s", d->name);

		}
		else
		{
			printf("Name: (nil)");
		}
		if (d ->age)
		{
			printf("Age: %d", d->age);

		}
		else
		{
			printf("Age: (nil)");
		}
		if (d ->owner)
		{
			printf("Owner: %s", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}

