#include <stddef.h>
#include "holberton.h"

/**
*_strstr- funtion that locates a substring
*@haystack: string
*@needle: substring
*
* Return:pointer to location of string
**/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
		{
			i++;
		}

		if (!needle[i])
		{
			return (haystack);
		}
	}

	return (0);
}
