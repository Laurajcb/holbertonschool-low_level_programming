#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memory using malloc
 * @b : unsigned int
 *
 * Return: if doesn't fail return status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (NULL);
		exit(98);
	}
	return (ptr);

}
