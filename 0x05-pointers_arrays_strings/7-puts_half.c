#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - prints half of a string \n .
 *@str: that is the char
 *
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int leng = 0;
	int n = 0;

	while (str[i])
	{
		leng++;
		i++;
	}

	if (leng % 2 == 0)
	{
		n = leng / 2;
	}
	else
	{
		n = (leng - 1) / 2;
	}

		for (i = n; i < leng - 1 ; i++)
		{
			putchar(str[i]);
		}
	_putchar('\n');
}
