#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to doggi
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	char *cp1, *cp2;
	dog_t *doggi;

	doggi = malloc(sizeof(dog_t));
	if (doggi == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	cp1 = malloc(sizeof(char) * i + 1);
	if (cp1 == NULL)
	{
		free(doggi);
		return (NULL);
	}
	cp2 = malloc(sizeof(char) * j + 1);
	if (cp2 == NULL)
	{
		free(cp1);
		free(doggi);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		cp1[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		cp2[k] = owner[k];
	}
	
	doggi->name = cp1;
	doggi->owner = cp2;
	doggi->age = age;
	return (doggi);
}
