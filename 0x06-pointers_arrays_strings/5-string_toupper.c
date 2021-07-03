#include <stdio.h>
#include "holberton.h"

/**
 * string_toupper- funtion that reverse the array
 *
 *@s: string
 *
 * Return: 0 is void
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{

			s[i] = s[i] - 32;
		}


	}
	return (s);
}

