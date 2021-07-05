#include <stddef.h>
#include "holberton.h"

/**
*_strpbrk- funtion serch a str for any set of bytes
*@s:string pointer
*@accept: string to char to match
*
* Return: pointer to s or null
**/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{

			if (s[i] == accept[j])
			{
				return (s + i);
			}

		}

	}

	return (0);
}
