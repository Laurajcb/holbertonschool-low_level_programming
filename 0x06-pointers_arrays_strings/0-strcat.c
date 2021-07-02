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


	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
