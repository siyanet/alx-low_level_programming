#include <stdlib.h>
#include "dog.h"

/**
  *new_dog -create new dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  *Return: pointer 
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));
	if (dog -> name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (o1 = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol *sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}

