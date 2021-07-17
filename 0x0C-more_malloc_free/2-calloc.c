#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc- function allocates memory for an array
 * @nmemb:size of memory
 * @size:array size
 * Return: a pointer to memory Area.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
