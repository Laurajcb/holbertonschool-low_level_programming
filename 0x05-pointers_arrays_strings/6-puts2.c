#include <stdio.h>
#include "holberton.h"

/**
 * puts2- prints every other character of a string \n .
 *@str: that is the char
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar (str[i]);

	}
	_putchar('\n');
}
