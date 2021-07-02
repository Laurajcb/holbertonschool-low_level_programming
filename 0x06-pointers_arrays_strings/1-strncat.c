#include <stdio.h>
#include "holberton.h"

/**
 * _strncat- funtion that cat 2 strings
 *@dest: where we appends src
 *@src: the source string to cp
 *@n:int
 * Return: cahr
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n && src[j] != '\0'; j++)

	{
		dest[i + j] = src[j];

	}

	return (dest);
}
