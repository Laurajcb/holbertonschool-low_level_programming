#include "holberton.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * free_grid- dimensional grid array alloc
 * @grid: is the grid
 * @height:of the grid
 *
 * Return: a pointer to array.
 */
void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{

		free(grid[i]);
	}
	free(grid);
}
