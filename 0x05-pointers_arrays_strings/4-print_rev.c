#include <stdio.h>
#include "holberton.h"

/**
 * print_rev- prints a string, in reverse \n .
 *@s: that is the char
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
