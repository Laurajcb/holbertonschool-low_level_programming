#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion- returns the length of a string.
 * @s: we gonna print
 * Return: 0
 */
int _strlen_recursion(char *s)

{
	int result = 0;

	if (*s == '\0')
	{
	return (0);

	}
	else
	{
	result = _strlen_recursion(s + 1);
	return (1 + result);
	}
}
