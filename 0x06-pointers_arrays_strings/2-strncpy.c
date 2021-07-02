#include <stdio.h>
#include "holberton.h"

/**
 * _strncpy- funtion that cp a strings
 *@dest: where copy
 *@src: the source string
 *@n: charaters form src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	for (i = 0; i < n && src[i] != '\0'; i++)

	{
		dest[i] = src[i];

	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
