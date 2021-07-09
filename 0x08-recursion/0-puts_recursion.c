#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion-function prints a string\n
 * @s: we gonna print
 * Return: 0
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
	printf("%c", *s);
	s++;
	_puts_recursion(s);
	}
	else
	{
	printf("\n");
	}
}
