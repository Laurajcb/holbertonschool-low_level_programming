#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character.
 *@c: variable, number.
 * Return: 1 if is uppercase othewise 0.
 **/

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
