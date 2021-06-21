#include <stdio.h>
#include "holberton.h"
#include <ctype.h>

/**
 * _abs - Computs the absolute value of an given number.
 * @n :the variable
 * Return: n if is positive or -n if is negative
 */

int _abs(int n)
{
if (n >=  0)
	return (n);
else
	return (-n);
}
