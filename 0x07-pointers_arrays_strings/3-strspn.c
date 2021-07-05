#include <stddef.h>
#include "holberton.h"

/**
*_strspn- funtion gets the length of a prefix substring
*@s:string where we check
*@accept: string to compare
*
* Return: pointer to s or null
**/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{

			if (s[i] == accept[j])
			{
				break;
			}

		}
		if (s[i] != accept[j])
		break;
	}

	return (i);
}
