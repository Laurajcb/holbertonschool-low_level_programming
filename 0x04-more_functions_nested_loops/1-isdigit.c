#include <stdio.h>
#include "holberton.h"

/**
 * _isdigit - function that checks for a digit from 0 to 9.
 * @c: variable, number.
 * Return: 1 if is a number form 0 to 9 othewise 0.
 **/

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
