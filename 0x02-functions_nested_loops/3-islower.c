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
	int r;

if (c >= 97 && c <= 122)
{
	r = 1;
}

if (c >= 65 && c <= 90)
{
	r = 0;
}

else
{
	r = 0;
}

return (r);
}
