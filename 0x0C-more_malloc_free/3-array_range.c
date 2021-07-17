#include "holberton.h"
#include <stdlib.h>
/**
 * array_range- function creates an array of int
 * @min:variable with the size
 * @max: variable  size
 * Return: a pointer to memory Area.
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int leng;

	if (min > max)
	{
		return (NULL);
	}
	leng = (max - min) + 1;
	array = malloc(leng * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < leng; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
