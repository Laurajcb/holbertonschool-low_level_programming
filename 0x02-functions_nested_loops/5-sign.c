#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _isalpha - Prints the sing of a number.
 * @n :the character with ascii code  .
 * Return: 1 and prints + if n is greater,otherwise print 0 or less
 */

int print_sign(int n)
{
	int r;

if (n > 0)
{
	_putchar('+');
	r = 1;
}

else if (n == 0)
{
	_putchar('0');
	r = 0;
}
else
{	putchar('-');
	r = 1;
}
return (r);
}
