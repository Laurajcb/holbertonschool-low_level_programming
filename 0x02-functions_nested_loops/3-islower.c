#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _islower - Prints the resutl of check for lowercase character.
 * @c :the character with ascii code  .
 * Return: 0 if is lower or 1 if is other case.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
