#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * print_sign-Prints the sing of a number.
 * @n :the character with ascii code  .
 * Return: 1 and prints + if n is greater,otherwise print 0 or less
 */

int print_sign(int n)
{

if (n > 0)
{
	_putchar(43);
	return (1);
}

else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
{	putchar(48);
	return (0);
}


}
