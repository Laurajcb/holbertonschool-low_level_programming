#include <stdio.h>
#include "holberton.h"

/**
 * _strlen- returns the length of a strings.
 *@s:that is the string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;

	}
return (counter);

}
