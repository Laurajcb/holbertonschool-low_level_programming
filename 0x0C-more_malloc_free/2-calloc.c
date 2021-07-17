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
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
