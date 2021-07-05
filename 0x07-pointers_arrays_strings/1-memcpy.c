#include "holberton.h"

/**
*_memcpy- funtion that copies memory area
*@src: from
*@dest: to
*@n:bytes of the memory area to change
* Return: pointer
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);


}
