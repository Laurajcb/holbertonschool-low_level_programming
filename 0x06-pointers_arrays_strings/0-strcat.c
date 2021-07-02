#include <stdio.h>
#include "holberton.h"

/**
 * _strcat- funtion cat two stringsover write
 *                 '\0' of the secong str and adds \n to the last one
 *@dest: where we appends src
 *@src: the source string to cp
 *
 * Return: pointer dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int leng_dest;

	while (dest[i] != '\0')
	{
		leng_dest++;
		i++;
	}

	for (i = leng_dest; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
