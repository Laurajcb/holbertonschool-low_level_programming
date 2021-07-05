#include <stddef.h>
#include "holberton.h"

/**
*_strchr- funtion that locates a char in a string
*@s:string where we check
*@c:character to found
*
* Return: pointer to s or null
**/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}

	}
	return (0);
}
