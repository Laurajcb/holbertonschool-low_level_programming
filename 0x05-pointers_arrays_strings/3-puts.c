#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string \n .
 *@str: that is the string
 *
 * Return: 0
 */
void _puts(char *str)
{

	while (*str)

		_putchar(*str++);

	_putchar('\n');


}
