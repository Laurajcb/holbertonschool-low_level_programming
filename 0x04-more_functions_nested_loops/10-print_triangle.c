#include "stdio.h"
#include "holberton.h"
/**
 * print_triangle- prints a triangle, followed by a new line.
 *@size: munber size of triangle.
 *
 * Return: void
 **/
void print_triangle(int size)
{

	int i;
	int j;


	if (size <= 0)

		putchar('\n');

	for (i = 1; i <= size ; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
