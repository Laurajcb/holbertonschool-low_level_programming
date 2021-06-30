#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy-makes a copi of the scr to @dest with the '\0'
 *@dest: where did a copy
 *@src: the source string to cp
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)

{
	int i = 0;


	while (src[i])
	{	dest[i] = src[i];
		i++;
	}

	return (dest);

}

