#include <stdlib.h>
#include "dog.h"
/**
* init_dog-initialize a variable of type struct dog
* @d: dog stuct
* @age:the dog's age
* @name:the dog's name
* @owner:the dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
