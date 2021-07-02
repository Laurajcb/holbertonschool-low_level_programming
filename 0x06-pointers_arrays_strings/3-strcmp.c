#include <stdio.h>
#include "holberton.h"

/**
 * _strcmp- funtion that compair 2 strings
 *@s1: 1 string
 *@s2: second string
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int rev;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			rev = s1[i] - s2[i];
			return (rev);

		}
		i++;
	}


	return (0);
}
