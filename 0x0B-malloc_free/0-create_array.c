#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array- creates an array of chars, and initializes it with c
* @c :char to use in funtion
* @size: of the array
* Return: NULL == 0 or if fails otherewise pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
