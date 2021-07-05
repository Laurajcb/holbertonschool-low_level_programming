#include "holberton.h"

/**
*_memset- funtion that fills memmory whit a constant byte
*@s: where the pointer is pointing
*@b: is the constant byte
*@n:bytes of the memory area to change
* Return: pointer
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);


}
