#include "holberton.h"

/**
 * print_square - draws a diagonal line .
 *@size: times that you prints #
 *
 * Return: void
 **/

void print_square(int size)

{
	int i;
	int j;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{

			_putchar(35);
		}
	_putchar('\n');
	}

}
else
_putchar('\n');
}
