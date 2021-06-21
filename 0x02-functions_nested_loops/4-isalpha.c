#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - Prints the funcion to check for alphabetic characters.
 * @c :the character with ascii code  .
 * Return: ifis lower or upper case returns 1 in other case returns 0.
 */

int _isalpha(int c)
{
	int r;

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	r = 1;
}

else
{
	r = 0;
}

return (r);
}
