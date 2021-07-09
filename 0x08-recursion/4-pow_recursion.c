#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion- returns the factorial
 * @x:number raised
 * @y: power of
 * Return: 0
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}

	return ((_pow_recursion(x, y - 1) * x));

}
