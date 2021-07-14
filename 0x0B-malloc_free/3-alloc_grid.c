#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid- pointer to a 2 dimensional array of integers.
 * @width :pointer
 * @height:pointer
 *
 * Return: a pointer to array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptwo;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptwo = (int **)malloc(height * sizeof(int *));
	if (ptwo == NULL)
	{
		free(ptwo);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptwo[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptwo[i][j] = 0;
		}
	}
		return (ptwo);

}
