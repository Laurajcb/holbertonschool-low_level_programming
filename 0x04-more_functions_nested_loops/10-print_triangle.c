#include "stdio.h"
#include "holberton.h"
/**
 * print_triangle- prints a triangle, followed by a new line.
 *
 *
 * Return: void
 **/
void print_triangle(int size)
{

	int i;
	int j;


	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (i = 1; i < size ; i++)
	{
	j = i;
	while (j > 0)
	{
		putchar(35);
		j--;
	}
	putchar('\n');
	}
	}
}
