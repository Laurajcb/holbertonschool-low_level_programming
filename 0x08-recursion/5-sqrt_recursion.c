#include "holberton.h"
#include <stdio.h>

/**
* root-get sqrt root of a natuarl number.
* @x: number to get the sqrt root.
* @y: number
* Return: -1 or n
*/


int root(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}

	if (y * y == x)
	{
		return (y);
	}

	return (root(x, y + 1));
}


/**
 *_sqrt_recursion- get sqrt root of a natuarl number.
 * @n: number to get the sqrt root.
 *
 * Return: -1 or n
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
