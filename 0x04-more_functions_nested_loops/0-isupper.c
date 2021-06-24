#include <stdio.h>
#include "holberton.h"

/**
 * int_isupper- function that checks for uppercase character.
 *@c: variable, number.
 *return: 1 if is uppercase othewise 0.
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
